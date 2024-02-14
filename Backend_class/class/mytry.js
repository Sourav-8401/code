function square(n){
    console.log(n*n);
}
function main(){
    let a = 5;
    let b = 6;
    let p = new Promise(function(callback){
        callback(n);
    });
    console.log(`a : ${a++} b: ${b++}`);
    p.then(function(n){
        console.log(n*n);
    });
    console.log(`a: ${a} b: ${b}`);
}
main();
function sumOfanything(a, b, reqFun){
    let n1 = reqFun(a);
    let n2 = reqFun(b);
    return n1 + n2;
}
var ans  = sumOfanything(5,10,function(n){
    return n*n;
});
console.log(ans);