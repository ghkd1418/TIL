function solution(s) {
    let answer = [], cur, next, count, temp = [], str;
    for(let i = 1; i <= s.length/2; i++)
    {
        let count = 1;
        temp.length = 0;
        for(let j = 0; j < s.length; j+=i)
        {
            cur = s.substr(j, i);
            next = s.substr(j+i, i);
            if(cur == next)
            {
                count++;
            }   
            else
            {
                if(count >1) str = count+cur
                else str = cur
                temp.push(str)
                count = 1;
            }
        }
        answer.push(temp.join(''));
    }
    // 10이나 11 등 1이 들어간 것이 없어지므로 애초에 걸러줘야함
    // answer = answer.map(x => x.replace(/1/g,""));
    
    // answer = answer.reduce(function(a, b) {return a.length <= b.length ? a : b;}).length
    // 시간 복잡도 개선
    // answer = answer.map(x => x.length);
    // answer = Math.min(...answer);
    
    return answer;
}