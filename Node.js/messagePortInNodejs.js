const { MessageChannel } = require('worker_threads');

class Foo {
  a = 1;
}

const foo = new Foo();

const mc = new MessageChannel()
mc.port1.onmessage = ({data}) => console.log(data);   // receive info
mc.port2.postMessage(foo);//send info


// const kb=  new KeyObject() 
// const x = new X509Certificate()
// const fh = new FileHandle()