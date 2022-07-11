// 각자 차집합을 통해 교집합 제거
// [2, 4, 6]  [1, 5, 7]  +를 먼저한다면 2, 6, 8 이 되어 4가 남고 처리가 불가해짐
// [2, 6, 8]  [1, 5, 7]  -를 먼저한다면 0, 4, 6 이 되어 8이 남고 처리가 불가해짐
// +- 한 배열을 생성 [0,2,4,6,6,8] lost 에서 이배열을 제거
// but, lost[2,4] reserve[3] 일시 2,4가 되어 틀림..

// 앞뒤에 숫자가 있는지 확인하고 있다면 lost 에서 

function solution(n, lost, reserve) {
    let answer = 0;

    lost = lost.filter(x => !reserve.includes(x));
    reserve = reserve.filter(x => !lost.includes(x));
    
    lost = reserve.filter(x => (x-1) || (x+1)).filter(x => !reserve.includes(x));
    
    answer = n - lost.length;
    
    return answer;
}