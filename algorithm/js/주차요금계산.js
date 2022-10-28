// 입차 후 출차 내역이 없다면 23:59 에 출차된 것으로 간주
// 초과한 시간이 단위시간(10)으로 나누어 떨어지지 않으면 올림
// fee = [기본시간, 기본 요금, 단위시간, 단위요금]

// 풀이
// 차번호 : [시간, 출입] 객체로 만들기
// 각 배열의 요소 중 개수가 홀수라면 마지막값 23:59에서 시간뺴주기
function solution(fees, records) {
    const [defaultTime, defaultFee, time, fee] = fees
    records = records.map(record => record.split(' '));
    
    let list = {}
    for(let i = 0; i < records.length; i++)
    {
        list[records[i][1]] = [];    // 키 값 설정 및 배열로 초기화
    }
    
    for(let i = 0; i < records.length; i++) // 각 배열에 값 할당
    {
        records[i][0] = records[i][0].split(':')
        records[i][0][0] = Number(records[i][0][0]) * 60 + Number(records[i][0][1])
        list[records[i][1]].push(records[i][0][0])
    }
    
    for (const car in list)
    {
        if(list[car].length % 2 === 1)
            list[car].push(1439)
        let cal = []    
        //누적 주차 시간이 기본 시간이하라면, 기본 요금을 청구합니다.            //9180
        for(let i = 0; i < list[car].length; i+=2)
        {
            // 계산 법 : 기본요금 + Math.ceil((누적주차시간 - 기본시간) / 단위시간) * 단위요금
            cal.push((list[car][i+1] - list[car][i]))
        }
        list[car] = cal
        list[car] = list[car].reduce((acc, cur) => acc + cur)
        if(list[car] <= defaultTime)
        {
            list[car] = defaultFee
            continue;
        }
        list[car] = defaultFee + Math.ceil((list[car] - defaultTime) / time) * fee;
    }
    
    
    // 차량번호가 작은 자동차부터 정수 배열에 담아 return 
    return Object.keys(list).sort().map(x => list[x])
}