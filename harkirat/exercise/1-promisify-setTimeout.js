/*
    Write a function that returns a promise that resolves after n seconds have passed, where n is passed as an argument to the function.
*/

function wait(n) {
    return new Promise((res,rej)=>
        setTimeout(
            ()=>{
                res(`Promise has been resolved in ${n} milisec`);
            },n
        )
    )
}
wait(10000).then((res)=>{console.log(res)});
module.exports = wait;