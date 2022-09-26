// n개이고, 중복되는 원소가 없는 튜플 
//  집합은 원소의 순서가 바뀌어도 상관없으므로
//{1}, {1, 2} = {1}, {2, 1} ➔ [1, 2] 
//{2}, {2, 1} = {2}, {1, 2} ➔ [2, 1] 
function solution(s) {
    
    let sArr = s.replace("{{", "").replace("}}", "").replace(/{/g, "").replace(/}/g, "").split(",");
    console.log(sArr)
    // 각 숫자의 개수 세서
    // 중복되는게 많은순으로 넣기 
    sArr= sArr.reduce((accu, curr) => { 
        accu[curr] = (accu[curr] || 0)+1; 
        return accu;
    }, {});
    console.log(sArr)
    
    let temp = Object.values(sArr).sort((a, b) => b-a)
    
    let result = [];
    for(const value of temp)
        result.push(Object.keys(sArr).find(key => sArr[key] === value));
    result = result.map(x => Number(x));
    
    return result;
}