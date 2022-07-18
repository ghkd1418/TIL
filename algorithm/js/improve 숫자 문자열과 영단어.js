function solution(s) {
    let answer = s;
    const numberToAlphbet = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", 'nine'];
    
    numberToAlphbet.forEach((item, index) =>{
       answer = answer.replace(new RegExp(item, "g"), index);
    });
    
    return Number(answer);
}