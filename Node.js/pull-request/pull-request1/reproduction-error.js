const {spawn} = require('child_process');
Object.defineProperty(Array.prototype, "0", {
  set(){
    console.log(123);
  } 
});
spawn("ls");
spawn("ls", ['-lh', '/usr']);

/* const { spawn } = require('node:child_process');
const ls = spawn('ls', ['-lh', '/usr']);

ls.stdout.on('data', (data) => {
  console.log(`stdout: ${data}`);
});

ls.stderr.on('data', (data) => {
  console.error(`stderr: ${data}`);
});

ls.on('close', (code) => {
  console.log(`child process exited with code ${code}`);
});
 */
