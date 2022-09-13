function solution(n, times) {
    times.sort((a,b) => a-b);
    
    let answer = 0;
    let left = 0; 
    let right = times[times.length-1] * n;

    while(left <= right){    
        let mid = Math.floor((left + right) / 2);
        let person = times.reduce((result, cur) =>
            result + Math.floor(mid/cur), 0);
        
        if(person >= n) right = mid -1;
        else left = mid +1;
    }
    
    return left;
}