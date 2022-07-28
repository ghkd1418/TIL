// 문자열이 더이상 제거되지 않을떄까지 실행
function solution(s)
{
    let answer = [...s]
    for(let i = 0 ; i < answer.length-1 ; i++){
        if(answer[i] === answer[i+1]){
            answer.splice( i, 2 );
              i = -1; //0부터 시작하도록 
        }
    }
    
    return answer.length === 0 ? 1 : 0;
}
      
 