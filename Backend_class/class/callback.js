function show(val){
    console.log(val);
}
function cal(n1, n2, mycallback){
    let sum;
    sum = n1 + n2;
    mycallback(sum);
}   

cal(5,132, show);
// function square(n){
//     return n*n;
// }
// function cube(n){
//     return n*n*n;
// }
// cube(5,square, show);
function sumOfSomething(a,b,callback){
    const n1 = callback(a);
    const n2 = callback(b);
    console.log(n1 + n2);
}
sumOfSomething(2,3,function cube(n){return n*n*n;});
sumOfSomething(4,5, (n)=>{
    return n*n;
})


