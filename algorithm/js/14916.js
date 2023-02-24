const fs = require("fs");
let n = fs.readFileSync("ex.txt").toString().trim();

let count = 0;
while (n > 0) {
  if (n % 5 === 0) {
    count += n / 5;
    return console.log(count);
  } else {
    n -= 2;
    count++;
    if (n === 0) return console.log(count);
  }
  if (n <= 1) return console.log(-1);
}
console.log(count);
