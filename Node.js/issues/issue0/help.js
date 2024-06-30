const { Worker } = require("node:worker_threads");

const worker = new Worker("./any-file.js");

worker.on("message", async (data) => {
  console.log('----------data', data)
  /* const stream = await worker.getHeapSnapshot(); //Segmentation fault (core dumped)
  stream.pipe(process.stdout) */
  
});
worker.postMessage("getHeapSnapshot");