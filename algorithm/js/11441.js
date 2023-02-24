let input = require("fs").readFileSync("ex.txt").toString().trim().split("\n");
input.shift();

console.log(input);
const m = input[1];
const arr = input[0].split(" ").map(Number);
input.shift();
input = input.map((x) => x.split(" "));
console.log(input);

for (let i = 1; i <= m; i++) {
  let sum = 0;
  for (let j = input[i][0]; j <= input[i][1]; j++) {
    sum += arr[j - 1];
  }
  console.log(sum);
}
