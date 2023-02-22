// var fs = require("fs");
var n = require("fs").readFileSync("ex.txt").toString().trim();

let dp = [0, 3, 7, 17];
for (let i = 4; i <= n; i++) {
  dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
}
console.log(dp[n]);

// xx xo ox   xo, ox 는 xx 의경우의 수보다 하나작다

/**
 * n = 1 => 3  왼 1 오1 없 1
 * n = 2 => 7  n마리대각선배치 2 한마리씩 2*n  없 1
 * n = 3 => 17    n마리대각선배치 2  (n-1마리대각선배치=>n-1의 n마리대각선 배치 경우의 수 곱하기 2) => 4  한마리씩 2*n  두마리씩 왼쪽만 1 두마리씩 오른쪽만 1 대각선양끝2 없 1       17
 * n = 4 =>
 */

// var input = require("fs").readFileSync("ex.txt").toString().trim();
// input = +input;

// const dp = [0, 3, 7];

// for (let i = 3; i <= input; i++) {
//   dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
// }
// console.log(dp[input]);
