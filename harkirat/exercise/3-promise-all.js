
function wait1(t){
    const p = new Promise((res,rej)=>
        setTimeout(() => {
            res("This is 1st resolve");
        }, t*1000)
    )
    return p;
}
function wait2(t){
    const p = new Promise((res,rej)=>
        setTimeout(() => {
            res("This is 2nd resolve");
        }, t*1000)
    )
    return p;
}
function wait3(t){
    const p = new Promise((res,rej)=>
        setTimeout(() => {
            res("This is 3rd resolve");
        }, t*1000)
    )
    return p;
}

async function calculateTime(t1,t2,t3){
    const ans = await Promise.all([wait1(t1), wait2(t2), wait3(t3)]);
    console.log(ans);
}

calculateTime(5,3,6);