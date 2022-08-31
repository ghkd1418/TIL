function solution(record) {
    let result = [];
    const map = {};

    for(let i= 0; i < record.length; i++)
    {
        const [state, uid, name] = record[i].split(' ');
        
        if (state === "Leave"){
            result.push([uid, '님이 나갔습니다.']);
            continue;   // 나갔을 떈 업데이트 x   continue 하지 않으면 undefined가 매핑됨
        }
        if (state === "Enter")
            result.push([uid, '님이 들어왔습니다.'])
            
        map[uid] = name
    }
    
    return result.map(x => map[x[0]] + x[1]);
}