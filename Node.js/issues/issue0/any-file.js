/* const { parentPort } = require("node:worker_threads")

let total = 0;
for(let i = 0; i < 100; i++){
  total++
}
parentPort.postMessage(total) */


const { parentPort } = require("node:worker_threads");
parentPort.postMessage("adfads");