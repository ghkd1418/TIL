function solution(nums) {
    let answer = new Set(nums).size;
    if(nums.length/2 < answer)
        answer = nums.length/2;
    
    return answer;
}