// count가 0보다 작아지거나 반복문이 종료됐을 때 0이 아니라면 false

function solution(s){
    let answer = [];
    let s_arr = [...s]
    let i = 0, count = 0;
    
    if(s[i] === '(')
    {
        while(s[i])
        {
            if(s[i] === "(")
                count++;
            else
                count--;
            if(count < 0)
                return false;
            i++;
        }
        if(count === 0)
            return true;
    }
    return false
}