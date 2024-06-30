const {
  Worker,
  isMainThread,
  parentPort,
  workerData,
} = require("worker_threads");
const fs = require("fs");

if (isMainThread) {
  console.log("----------isMainThread", isMainThread);
  console.log("----------__filename", __filename);
  // This block of code is executed in the main thread.
  const worker = new Worker(__filename, {
    workerData: null,
  });

  worker.on("message", async (message) => {
    console.log("----------1");
    if (message === "heapSnapshot") {
      // Get the heap snapshot from the worker.
      const heapSnapshot = await worker.getHeapSnapshot();

      // Save the heap snapshot to a file.
      const writeStream = fs.createWriteStream("heapSnapshot.heapsnapshot");
      heapSnapshot.pipe(writeStream);
      //   heapSnapshot.pipe(process.stdout);

      writeStream.on("finish", () => {
        console.log("Heap snapshot saved to heapSnapshot.heapsnapshot");
      });
    }
  });

  worker.postMessage("getHeapSnapshot");
} else {
  console.log("----------is not main thread");

  // This block of code is executed in the worker thread.
  parentPort.on("message", async (message) => {
    console.log("----------2");
    if (message === "getHeapSnapshot") {
      // Signal the main thread to get the heap snapshot.
      parentPort.postMessage("heapSnapshot");
    }
  });
}
