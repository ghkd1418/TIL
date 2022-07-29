// 뒤에 있는 기능은 앞에 기능이 배포 될 때 함께 배포됨
function solution(pro, spd) {
    let answer = [0];
    // pro = pro.map(x => 100-x);
    // for(let i = 0; i<pro.length; i++)
    //     days.push(Math.ceil(pro[i] / spd [i]));
    const days = pro.map((x, index) =>
    Math.ceil((100 - x) / spd[index])
  );
    console.log(days);

    let maxDay = days[0];
    for(let i = 0, j = 0; i< days.length; i++)
    {
        if(days[i] <= maxDay)
            answer[j] += 1;
        else 
        {
            maxDay = days[i];
            answer[++j] = 1;
        }
    }

    return answer;
}