const solution= (nums) => {
    let answer = 0;
    const len = nums.length;
    
    for (let i=0; i<len; i++) { //배열 안에서 서로다른 3개의 수를 더하기
        for (let j=i+1; j<len; j++) {
            for (let k=j+1; k<len; k++) {
                let sum = nums[i] + nums[j] + nums[k];
 
                if (isPrime(sum)) { //소수라면 정답 count++
                    answer++;
                }
            }
        }
    }
  
    return answer;
}

const isPrime = (sum) => {
        if (sum < 2) return true;
        for (let i=2; i<sum; i++) { //1외에 숫자 하나라도 나누어떨어지면 소수탈락
            if (sum % i == 0) return false;
        }
        return true;
    }