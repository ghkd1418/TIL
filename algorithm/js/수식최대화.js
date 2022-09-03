function solution(expression) {
    const cal = [
        ['-', '*', '+'],
        ['-', '+', '*'],
        ['*', '-', '+'],
        ['*', '+', '-'],
        ['+', '-', '*'],
        ['+', '*', '-']
    ];
    let result = [];

    for(let cal_el of cal)
    {
        let num = expression.split(/(\D)/);
        for(let i of cal_el)
        {
            while (num.includes(i))
            {
                const idx = num.indexOf(i)
                num.splice(idx-1, 3, eval(num.slice(idx - 1, idx+2).join('')));  
            }
        }
        result.push(Math.abs(num[0]));
    }


    return Math.max(...result);
}