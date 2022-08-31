const sum = (arr) => arr.reduce((acc, cur) => acc+cur, 0);

function solution(queue1, queue2) {
    const queue = [...queue1, ...queue2];
    const target = sum(queue) / 2;
    const loop = queue.length * 4;
    let count = 0, start = 0, end = queue1.length;
    let totalsum = sum(queue.slice(start, end))
    
    while(count <= loop)
    {
        if(target > totalsum)
        {
            totalsum += queue[end]
            end++;
        }
        else if(target < totalsum)
        {
            totalsum -= queue[start]
            start++;
        }        
        else if(target === totalsum)
            return count
        count++;
    }
    
    return -1;
}