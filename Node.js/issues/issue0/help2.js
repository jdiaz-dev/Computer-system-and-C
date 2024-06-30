const v8 = require('node:v8');
const stream = v8.getHeapSnapshot();
console.log(stream);
// stream.pipe(process.stdout); 