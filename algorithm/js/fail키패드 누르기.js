// 1 4 7 L
// 3 6 9 R
// 2 5 8 0 현재 손가락 위치에서 더 가까운 손가락 사용
// 거리가 같다면 hand

// sol 
// 1, 4, 7, *  => 1, 2, 3, 4
// 2, 5, 8, 0  => 1, 2, 3, 4
// 3, 6, 9, #  => 1, 2, 3, 4

// 바뀐 손위치 생각하기
function solution(numbers, hand) {
    let answer = '';
    let curL = 4, curR = 4, curMid = 0;
    if(hand == "right")
        hand = "R"
    if(hand == "left")
        hand = "L"
    
    for(let i = 0; i < numbers.length; i++)
    {
        console.log(i)
        console.log(`cur L = ${curL}`);
        console.log(`cur R = ${curR}`);
        if(numbers[i] == 1)
        {
            answer += "L";
            curL = 1
        }
        if(numbers[i] == 2)
        {
            curMid = 1
            if(curL == curR)
                answer += hand;
            else
                answer += Math.abs(curL - curMid) < Math.abs(curR - curMid) ? "L" : "R"; 
            // L이면 curL에 1넣기
            if(answer.substring(answer.length-1) == "L")
                curL = 1
            else
                curR = 1;
        }
        if(numbers[i] == 3)
        {
            answer += "R";
            curR = 1
        }
        if(numbers[i] == 4)
        {
            answer += "L";
            curL = 2
        }
        if(numbers[i] == 5)
        {
            curMid = 2
            if(curL == curR)
                answer += hand;
            else
                answer += Math.abs(curL - curMid) < Math.abs(curR - curMid) ? "L" : "R";
            if(answer.substring(answer.length-1) == "L")
                curL = 2
            else
                curR = 2;
        }
        if(numbers[i] == 6)
        {
            answer += "R";
            curR = 2
        }
        if(numbers[i] == 7)
        {
            answer += "L";
            curL = 3
        }
        if(numbers[i] == 8)
        {
            curMid = 3
            if(curL == curR)
                answer += hand;
            else
                answer += Math.abs(curL - curMid) < Math.abs(curR - curMid) ? "L" : "R"; 
            if(answer.substring(answer.length-1) == "L")
                curL = 3
            else
                curR = 3;
        }
        if(numbers[i] == 9)
        {
            answer += "R";
            curR = 3
        }
        if(numbers[i] == '*')
        {
            answer += "L";
            curL = 4
        }
        if(numbers[i] == 0)
        {
            curMid = 4
            if(curL == curR)
                answer += hand;
            else
                answer += Math.abs(curL - curMid) < Math.abs(curR - curMid) ? "L" : "R"; 
            if(answer.substring(answer.length-1) == "L")
                curL = 4
            else
                curR = 4;
        }
        if(numbers[i] == '#')
        {
            answer += "R";
            curR = 4;
        }
    }   
    return answer;
}

// 실패이유 : 전제가 잘못됨