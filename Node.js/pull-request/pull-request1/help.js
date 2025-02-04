// const { nextTick } = require('node:process');

const callback = (argument) => {
  console.log("----------argument", argument);
  console.log("nextTick callback");
};

console.log("start");
process.nextTick(callback, "foooooo");
console.log("scheduled");
// Output:
// start
// scheduled
// nextTick callback
