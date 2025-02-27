const { spawn } = require("child_process");

const child = spawn("ls", ["-lh", "/usr"], {
  cwd: "/home/user",
  env: { PATH: process.env.PATH, CUSTOM_VAR: "example" },
  detached: false,
  stdio: ["pipe", "pipe", "pipe"], // test receive stdio in c++ side
});
