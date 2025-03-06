const arr = [];

Object.defineProperty(arr, "0", {
  set(value) {
    console.log("First element set to:", value);
  }
});

arr[0] = "Hello"; // Logs: First element set to: Hello
