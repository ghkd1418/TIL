// moves 순서대로 board[0](제일 위에 행)부터 제거하며 basket 에 저장
// 이전 숫자와 현재 제거하는 숫자가 같다면 result+2를 해주고 basket에서 해당 숫자쌍 제거 


// [0,0,0,0,0]
// [0,0,1,0,3]
// [0,2,5,0,1]
// [4,2,4,4,2]
// [3,5,1,3,1]

//basket = 4, 3, 1, 1 ~~~
// 담은배열은 원 배열에서 삭제해야함
function solution(board, moves) {
    let answer = 0;
    let basket = [];
    for(let i = 0; i < moves.length; i++)
    {
        for(let j = 0; j < board.length; j++)
        {
            //비었는지 체크
            if(board[j][moves[i]-1] !== 0)
            {
                basket[i] = board[j][moves[i]-1];
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }
    // 루프 돌며 연속된 중복제거 
    // 제거 일어나면 제거된 값의 전값 돌아가서 확인
    basket = basket.filter(x => x !== null);
    for(let i = 0; i < basket.length; i++)
    {
        if(basket[i] === basket[i+1])
        {
            basket.splice(i, 2)
            answer += 2;
            i-=2;
        }
    }
    
    return answer;
}