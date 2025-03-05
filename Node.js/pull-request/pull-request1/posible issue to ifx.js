Object.defineProperty(Array.prototype, "0", {
  set() {
    console.log(123);
  },
});
const arr = [];
arr[0] = "test"; // This will trigger the setter and log "123", lauunch error 
