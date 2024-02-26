function sum(a,b){
    return a+b;
}

try{
    var a = [1,3,4,5,6];
    console.log(a);
    // console.log(b);
    const mysum = sum(12,3);
    if(mysum>10){
        throw new Error('It is greater than 10');
    }
}catch(error){
    console.log("The error is:"+error.message);
}
