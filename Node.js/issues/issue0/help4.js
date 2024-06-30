const { Worker } = require('worker_threads');
const fs = require('fs');

const worker = new Worker('./worker.js');

worker.on('message', async (message) => {
  console.log('-----------1')
  if (message === 'heapSnapshot') {
    // Get the heap snapshot from the worker WORKSS!    const heapSnapshot = await worker.getHeapSnapshot();

    // Save the heap snapshot to a file.
    const writeStream = fs.createWriteStream('heapSnapshot.heapsnapshot');
    heapSnapshot.pipe(writeStream);

    writeStream.on('finish', () => {
      console.log('Heap snapshot saved to heapSnapshot.heapsnapshot');
    });
  }
});
console.log('-----------2')

worker.postMessage('getHeapSnapshot');
console.log('-----------3')
