// 즉, 아무 회전도 하지 않았을 때, i 행 j 열에 있는 숫자는 ((i-1) x columns + j)입니다.
// (2, 2) => ((2 - 1) * (6 + 2)) = 8

// 매핑 -> 최솟값찾기 -> 회전 -> 매핑
// 마지막에는 최솟값만 찾고 끝내면 됨.
function solution(rows, columns, queries) {
    let arr = [], temp = [], answer = [];
    
    for (let i = 1; i <= rows*columns; i++)
    {
        temp.push(i);
        if(temp.length === columns)
        {
            arr.push(temp);
            temp = [];
        }   
    }             
    
    for(let c = 0; c < queries.length; c++)
    {
        const [x1, y1, x2, y2] = queries[c].map(x => x-1);    
            
        for(let i = 0; i < y2 - y1; i++) temp.push(arr[x1][y1+i]);
        for(let i = 0; i < x2 - x1; i++) temp.push(arr[x1+i][y2]);
        for(let i = 0; i < y2 - y1; i++) temp.push(arr[x2][y2-i]);
        for(let i = 0; i < x2 - x1; i++) temp.push(arr[x2-i][y1]);
        
        temp.unshift(temp.pop());
        answer.push(Math.min(...temp));
        
        if(c === queries.length-1)
            break;
    
        for (let i = 0; i < y2 - y1; i++) arr[x1][y1 + i] = temp.shift()
        for (let i = 0; i < x2 - x1; i++) arr[x1 + i][y2] = temp.shift()
        for (let i = 0; i < y2 - y1; i++) arr[x2][y2 - i] = temp.shift()
        for (let i = 0; i < x2 - x1; i++) arr[x2 - i][y1] = temp.shift()
    }
    
    return answer;
}