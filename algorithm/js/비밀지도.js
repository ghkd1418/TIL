// 지도1과 지도 2를 겹쳐서 생각 
// 어느 한 지도에서라도 벽(#)이면 벽 
// 모두 공백인 부분은 공백

// 주의!
// 2진수 앞에 n자리수만큼 0으로 채우기
function solution(n, arr1, arr2) {
    let answer = [];
    let map1 = arr1.map(x => x.toString(2).padStart(n, '0'));
    let map2 = arr2.map(x => x.toString(2).padStart(n, '0'));
    
    for(let i = 0; i < n; i++)
    {
        let strTemp = '';
        for(let j = 0; j < n; j++)
        {
            if(map1[i].charAt(j) == 1 || map2[i].charAt(j) == 1)
                strTemp += "#"
            else
                strTemp += " ";
        }        
        answer.push(strTemp);
    }
    
    return answer;
}