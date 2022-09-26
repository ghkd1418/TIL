function solution(survey, choices) {
    const obj = {
        R: 0,
        T: 0,
        C: 0,
        F: 0,
        J: 0,
        M: 0,
        A: 0,
        N: 0,
    }
    for(let i = 0; i < survey.length; i++)
    {
        let select; // 선택된 성격 유형
        if(choices[i] > 4) {
            select = survey[i][1]
            obj[select] += choices[i] - 4;
        } 
        else if(choices[i] < 4) {
            select = survey[i][0]
            obj[select] += 4 - choices[i];
        }
    }
    let category = Object.keys(obj);
    let result = '';

    for(let i = 0; i < category.length; i+=2)
    {
        if(obj[category[i]] > obj[category[i+1]])
            result += category[i];
        else if(obj[category[i]] < obj[category[i+1]])
            result += category[i+1];
        else    
        {
            //각 성격 유형 점수가 같으면, 두 성격 유형 중 사전 순으로 빠른 성격 유형을 검사자의 성격 유형
            let compare = [];
            compare.push(category[i], category[i+1])
            compare.sort();
            result += compare[0];
        }
    }
    
    
    return result;
}