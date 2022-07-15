function solution(absolutes, signs) {
    let answer = 0;
    absolutes.forEach(v, i)
    {
        if(signs[i])
            answer += v[i];
        else
            answer -= v[i];
    }
    return answer;
}