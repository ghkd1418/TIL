const changeSet = (str) => {
    const arr = [];
    for(let i = 0; i < str.length; i++)
    {
        let temp = str.substr(i, 2)
        if(temp.match(/[A-Za-z]{2}/))
            arr.push(temp.toLowerCase());
    }
    return arr;
}

function solution(str1, str2) {
    
    const arr1 = changeSet(str1);
    const arr2 = changeSet(str2);
    //a = {1, 1, 2, 2, 3}, 다중집합 B = {1, 2, 2, 4, 5}
    // 1, 2, 3, 4, 5,
    // A ∩ B = {1, 2, 2}, 합집합 A ∪ B = |a| + |b|  - a n b
    const len = Math.max(arr1.length, arr2.length);
    // 자카드 교집합 구하는 법
    // 1.
    // 각 배열의 중복이 허용된 요소의 개수를 세고
    // 요소와 개수 모두 같으면 둘 중 작은 값 count
    const set = new Set([...arr1, ...arr2]);  
    let intersection = 0, union = 0;
    for (let i of set)
    {
        let count1 = arr1.filter(x => x === i).length;
        let count2 = arr2.filter(x => x === i).length;
        intersection += Math.min(count1, count2);
        union += Math.max(count1, count2);
    }
    
    console.log(union)
    console.log(intersection)
    let answer = Math.floor(intersection / union * 65536);
    
    return union === 0 ? 65536 : Math.floor(intersection / union * 65536);
}
