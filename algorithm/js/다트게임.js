// s = 1제곱 d = 2제곱 t  = 3제곱
// * 해당점수와 바로 전 얻은 점수 2배
// # 해당 점수 마이너스 

function solution(dartResult) {
    let answer = [], temp, n = [], result;

    let numArr = dartResult.match(/\d+/g);
    numArr = numArr.map(x => Number(x));
    n = dartResult.replace(/\d+/g, ',');
    n = n.substr(1).split(',');    
    for(let i = 0; i < n.length; i++)
    {
        if(n[i].includes('D'))
            temp = numArr[i] ** 2;
        else if(n[i].includes('T'))
            temp = numArr[i] ** 3
        else if(n[i].includes('S'))
            temp = numArr[i];
    
        if(n[i].includes('*'))
        {
            temp *= 2;
            answer[i-1] *= 2; 
        }
        else if(n[i].includes('#'))
            temp *= -1;
        answer.push(temp);
    }
    result = answer.reduce((a, c) => a+c)
    return result;
}