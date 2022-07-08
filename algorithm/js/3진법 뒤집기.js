function solution(n) {
    let answer = 0;
    let arr = [];
    
    arr = n.toString(3).split('').reverse().map(Number);
    
    for(let i = 1; i <= arr.length; i++)
    {
        answer += arr[i-1] * 3 ** (arr.length - i);
    }
    
    return answer;
}