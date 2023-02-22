var fs = require("fs");
var dp = fs
  .readFileSync("ex.txt")
  .toString()
  .split("\n")
  .map((str) => str.split(" ").map(Number));
let n = dp.shift();
n = n[0];

console.log(dp);
for (let i = 1; i < n; i++) {
  dp[i][0] += Math.min(dp[i - 1][1], dp[i - 1][2]);
  dp[i][1] += Math.min(dp[i - 1][0], dp[i - 1][2]);
  dp[i][2] += Math.min(dp[i - 1][0], dp[i - 1][1]);
  console.log(dp[i][0], dp[i][1], dp[i][2]);
}
console.log(Math.min(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]));

/**
 * i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.
 * i전까지의 최솟값을 메모제이션
 * 해당 예제에서 dp[1][0]을 선택한 경우는 전에 39를 고르는게 최솟값
 */
