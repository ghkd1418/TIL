function solution(p, location) {
    let count = 0;
    
    while(1)
    {
        let max = Math.max(...p);
        let n = p.shift();
        if(n == max){
            count++
            if(location == 0)
                return count;
        }
        else
            p.push(n);
        location--;
        if(location == -1) // -1이 됐다면 인쇄하지 못한것이므로 배열 마지막 자리 할당
            location = p.length-1 
    }
}