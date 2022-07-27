function solution(record) {
    let answer = [], id, nickname;
    let profile = {
        [id]: nickname,
    };
    
    for(let i = 0; i < record.length; i++)
    {
        answer[i] = record[i].split(" ");
        console.log(`answer[i] = ${answer[i]}`);
        id = answer[i][1]
        profile[id] = answer[i][2]
    }
     
    for(let i = 0; i < record.length; i++)
    {
        for(let j in profile)
        {
            if(answer[i][1] == j)
                answer[i][1] = (profile[j])
        }
        answer[i].splice(2)
        if(answer[i][0] == "Enter")
            answer[i] = answer[i][1] + "님이 들어왔습니다."
        if(answer[i][0] == "Leave")
            answer[i] = answer[i][1] + "님이 나갔습니다."
    }
    
    answer = answer.filter(x => !(x.includes("Change")))
    
    return answer;
}