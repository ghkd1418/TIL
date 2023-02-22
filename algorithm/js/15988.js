// let input = require("fs")
//   .readFileSync("ex.txt")
//   .toString()
//   .split("\n")
//   .map((v) => Number(v));
// input.shift();

// let num = Math.max(...input);

// let dp = [];
// (dp[0] = 0), (dp[1] = 1), (dp[2] = 2), (dp[3] = 4);

// for (let i = 4; i <= num; i++) {
//   dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
// }

// for (let i = 0; i < input.length; i++) {
//   console.log(dp[input[i]]);
// }
var fs = require("fs");
var inputs = fs
  .readFileSync("ex.txt")
  .toString()
  .split("\n")
  .map((v) => Number(v));
var cases = Number(inputs[0]);
inputs.shift();
let dp = [];
(dp[0] = 0), (dp[1] = 1), (dp[2] = 2);
dp[3] = 4;
console.log(inputs);
let num = Math.max(...inputs);
for (let i = 4; i <= num; i++) {
  dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
}
for (let i = 0; i < cases; i++) {
  console.log(dp[inputs[i]]);
}

/*
1 = 1
2 = 1+1 2
3 = 1+1+1 1+2 2+1 3
4 = 1+1+1+1 1+2+1 2+1+1 1+1+2  2+2 1+3 3+1
5 =.1+1+1+1+1 1+2+1+1 2+1+1+1 1 1 2 1 , 1 1.1 2
3 1 1. 1 3 1. 1 1.3  2 2 1, 1 2 2, 212, 32. 23



dp[i] = dp[i-1] + dp[i-2] + dp[i-3]

1
2
4
7
13

const n = require('fs').readFileSync('/dev/stdin').toString() * 1;


    let dp = []
    
    dp[1] = 1, dp[2] = 2, dp[3] = 4;

    for(let i = 4; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])% 1000000009
    }
    console.log(dp[n] )
    */
