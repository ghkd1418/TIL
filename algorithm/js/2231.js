var n = require("fs").readFileSync("ex.txt").toString().trim();

// 생성자가 없는 경우?  100, 200 return  0을출력
// 여러개인 경우? 2+0+7 + 207 => 216
// 생성자의 조건 : n보다 작고 n의 자릿수 * 9 이상
// 각 자리에 올 수 있는 최대값인 9보다 작다면 n을 만들수 없기떄문
// 28의 생성자 : 23

//n의자릿수 구하기 => i의 최솟값 구하기
let count = n.length;
let min = n - 9 * count;
// 범위안에서 자릿수 분해
for (let i = min; i < n; i++) {
  let nums = i.toString().split("").map(Number);
  let sum = nums.reduce((res, cur) => res + cur);
  sum += i;

  if (sum == n) return console.log(i);
}
console.log(0);
