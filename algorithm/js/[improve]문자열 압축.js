function solution(s) {
    let answer = [], cur, next, count, str, i = 1;

    do
    {
        let count = 1;
        let temp = [];
        for(let j = 0; j < s.length; j+=i)
        {
            cur = s.substr(j, i);
            next = s.substr(j+i, i);
            if(cur == next)
                count++;
            else
            {
                if (count >1) str = count+cur
                else str = cur
                temp.push(str)
                count = 1;
            }
        }
        i++;
        answer.push(temp.join(''));
    }while(i <= s.length/2)
    
    answer = answer.map(x => x.length);
    answer = Math.min(...answer);
    
    return answer;
}