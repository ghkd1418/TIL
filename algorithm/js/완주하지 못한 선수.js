// participant 참여한 선수의 이름 배열 
// completion 완주한 선수의 이름 배열
// return 완주하지 못한 선수 이름

// solution
// 1. 차집합 통하여 구하기  ==> 동명이인 있을 수 있어서 불가능
// 2. 배열 두개를 합해서 요소개수 중 홀수 개인 요소 출력

function solution(participant, completion) {
    let answer = [...participant, ...completion];
    const result = answer.reduce((accu, curr) => { 
  accu[curr] = (accu[curr] || 0)+1;
  return accu;
}, {});
    answer = Object.entries(result).filter(([k,v])=>v%2===1).map(([k])=>k).toString();
    
    return answer;
}