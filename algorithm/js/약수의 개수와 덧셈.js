function solution(left, right) {
    let answer = 0, count= 0;
    
    while(left <= right)
    {
        for(let i = 1; 2*i <= left; i++)
        {
            if(left % i == 0)
                count++;             
        }
        count += 1;
        if(count % 2 == 0)
            answer += left;
        else
            answer -= left;
        left++;
        count = 0;
    }
    return answer;
}