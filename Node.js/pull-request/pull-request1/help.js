const { spawn } = require("child_process");
const obj = {};

Object.defineProperty(obj, "0", {
  set() {
    console.log("------------123");
  },
});

obj[0] = "test"; // Works fine
spawn("ls");
// spawn("ls", ["-lh", "/usr"]);
