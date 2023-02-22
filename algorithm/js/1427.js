var n = require("fs").readFileSync("ex.txt").toString().trim();

// console.log(n);

n = n
  .split("")
  .sort((b, a) => a - b)
  .join("");

// n = [...n].sort((b, a) => a - b).join("");

console.log(Number(n));
