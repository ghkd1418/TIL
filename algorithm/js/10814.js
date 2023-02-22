const filePath = process.platform === "linux" ? "/dev/stdin" : "ex.txt";
let input = require("fs").readFileSync(filePath).toString().trim().split("\n");
input.shift();

input = input.map((x) => x.split(" "));
console.log(
  input
    .sort((a, b) => a[0] - b[0])
    .map((x) => x.join(" "))
    .join("\n")
);
