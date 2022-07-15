function solution(numbers) {
    let answer = [1, 2, 3, 4, 5, 6, 7, 8, 9];
    answer = answer.filter(x => !numbers.includes(x)).reduce((prev, curr) => prev + curr);
    
    return answer;
}