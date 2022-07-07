// 실패율 = 도달했지만 클리어 하지못한 플레이어 수 / 스테이지에 도달한 플레이어 수
// N = 스테이지 개수 ( n+1 은 N번 스테이지까지 모두 클리어한 사용자)
// stages = 사용자가 현재 멈추어있는 스테이지 번호가 담긴 배열
// answer = 실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담긴 배열
//          실패율이 같다면 스테이지 번호 오름차순
//          스테이지 도달 유저 없으면 0


function solution(N, stages) {
    let answer = [];
    let count_i, smaller_then_i;
    
    for(let i = 1; i <= N; i++)
    {
        count_i = 0, smaller_then_i = 0;
        for(let j = 0; j < stages.length; j++)
        {
            if(i === stages[j])
                count_i++;
            if(i > stages[j])
                smaller_then_i++;
        }
        let fail = count_i / (stages.length - smaller_then_i);
        answer.push([i, fail]);
    }
    answer.sort((a, b) => b[1] - a[1]); // fail 내림차순정렬
    answer = answer.map(v => v[0]);
    return answer;
}