// 배열 some 중복검사 후 push
function solution(numbers) {
    let answer = [];
    
    for(let i = 0; i < numbers.length; i++)
        for(let j = i+1; j < numbers.length; j++)
            answer.push(numbers[i]+numbers[j]);

    answer = [...new Set(answer)].sort((a, b) => a - b);
    return answer;
}