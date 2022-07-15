// 중복 값 개수에 해당하는 순위 
// 중복 값 개수 + 0의 개수 해당하는 순위

function solution(lottos, win_nums) {
    let answer = [];
    const rank = {
        0: 6,
        1: 6,
        2: 5,
        3: 4,
        4: 3,
        5: 2,
        6: 1
    }
    const arr = [];
    
    let length = lottos.filter(x => win_nums.includes(x)).length
    arr.push(rank[length]);
    length = lottos.filter(x => win_nums.includes(x)).length + lottos.filter(e => 0 === e).length
    arr.unshift(rank[length]);

    return arr;
}