const { spawn } = require("child_process");
Object.defineProperty(Array.prototype, "0", {
  set() {
    console.log(123);
  },
});
spawn("ls");
spawn("ls", ["-lh", "/usr"]);
