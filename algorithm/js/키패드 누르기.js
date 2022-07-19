// 인덱스 비교 후 절댓값이 작은것으로 삼항연삱자 처리

// myindexOf = number[i]의 위치를 keypad에서 찾아줌 (para = numbers[i], )
const keypad = [
        [1, 2, 3], 
        [4, 5, 6], 
        [7, 8, 9], 
        ["*", 0,"#"]
        ];

const myindexOf = (value) => {
    for(let i = 0; i < keypad.length; i++)
    {
        for(let j = 0; j < keypad[0].length; j++)    
        {
            if(keypad[i][j] === value)
                return [i, j];
        }
    }    
}

function solution(numbers, hand) {
    let answer = '';
    let curL = [3, 0], curR = [3, 2], cursor, compL, compR;
    hand = hand === "right" ? "R" : "L";

    for(let i = 0; i < numbers.length; i++)
    {
        if(numbers[i] === 1 || numbers[i] === 4 || numbers[i] === 7)
        {
            answer += "L";
            curL = myindexOf(numbers[i]);
        }
            
        else if(numbers[i] === 3 || numbers[i] === 6 || numbers[i] === 9)
        {
            answer += "R";
            curR = myindexOf(numbers[i]);
        }
            
        else
        {
            cursor = myindexOf(numbers[i]); // 2, 5, 8, 0 의 위치반환
            
            compL = Math.abs(curL[0] - cursor[0]) + Math.abs(curL[1] - cursor[1]);
            compR = Math.abs(curR[0] - cursor[0]) + Math.abs(curR[1] - cursor[1]);
            
            if(compL === compR)
            {
                answer += hand
                if(hand === "L")
                    curL = cursor;
                else
                    curR = cursor;
            }
            else
            {
                answer += compL < compR ? "L" : "R";
                if(answer.substr(-1) === "L")
                    curL = cursor;
                else
                    curR = cursor;
            }
        }
    }
    
    return answer;
}