function solution(s) {
    let answer = 0, cur, next, count, compare=[];
    for(let i = 1; i < s.length/2; i++)
    {
        let count = 1;
        for(let j = 0; j < s.length; j++)
        {
            cur = s.substr(j, i);
            next = s.substr(j+1, i);
            if(cur == next)
                count++;
            else
                compare = 
        }
    }
    return answer;
}