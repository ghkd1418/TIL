function solution(array, commands) {
    let answer = [];
    
    for(i = 0; i < commands.length; i++)
    {
        answer[i] = array.slice(commands[i][0]-1, commands[i][1]);
        answer[i].sort(function(a, b){return a-b})
        answer[i] = answer[i][commands[i][2]-1]
    }
    
    return answer;
}