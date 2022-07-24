function solution(s) {
    let answer = [], cur, next, count, temp = [];
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
                temp.push(count+cur)
                count = 1;
            }
        }
        answer.push(temp.join(''));
    }
      answer = answer.reduce(function(a, b) {return a.length <= b.length ? a : b;})
    if(answer.length > s.length) answer = s;
    
    return answer.length;
}