const { parentPort } = require('worker_threads');

console.log('-----------4')

parentPort.on('message', (message) => {
console.log('-----------5')
  if (message === 'getHeapSnapshot') {
    // Signal the main thread to get the heap snapshot.
    parentPort.postMessage('heapSnapshot');
  }
});
