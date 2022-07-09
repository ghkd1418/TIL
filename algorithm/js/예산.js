// d = 부서별 신청 금액 배열
// budget 총 예산
// 지급하는데 최대한 많은 부서에 지원

function solution(d, budget) {
    let answer = 0;

    while(budget >= Math.min(...d))
    {
        budget -= Math.min(...d);
        d.splice(d.indexOf(Math.min(...d)), 1);
        answer++;
    }
    return answer;
}