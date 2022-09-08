const vaildCondition = (info, currentQuery) => {
    let result = 0;
    
    for(let i = 0; i < info.length; i++){
        let vaild = true;
        
        for(let j = 0; j < currentQuery[0].length; j++){
            if(!info[i][0].includes(currentQuery[0][j])){
                vaild = false
                break;
            }
        }
        let f = info[i][1].flat();
        let c = currentQuery[1].flat();
        if(vaild)
            if(f[0] >= c[0])
                result++;
    }
    return result;
}

function solution(info, query) {
    query = query.map(x => x.split(" ").filter(x => x !== 'and' && x !== '-').map(x =>{if(isNaN(Number(x))) return x;
        return [Number(x)]}))
    info = info.map(x => x.split(" ").map(x =>{if(isNaN(Number(x))) return x;
        return [Number(x)]}))
    
    for(let i = 0; i < info.length; i++){
        info[i] = info[i].reduce((result, item) => {
                typeof item === 'string' ? result[0].push(item) : result[1].push(item); 
                return result
            }, [[], []]);
    }
    
    let answer = [];
    for(let i = 0; i < query.length; i++)
    {
        let currenQuery = query[i]
        let score = currenQuery.pop();
        currenQuery = [currenQuery, score]  
        let count = vaildCondition(info, currenQuery);
        answer.push(count);
    }
    
    return answer;
}
