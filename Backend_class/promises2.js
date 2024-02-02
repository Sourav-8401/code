function kiratAsyncFunction(){
    let p = new Promise(function(resolve){
        console.log("Inside the promise")
        resolve("hi there! this is from callback");
    });
    return p;
}
function main(){
    kiratAsyncFunction().then(function(value){
        console.log(value + " this is main1");
    });
}
main();


///using asyncs function

async function main2(){
    let value = await kiratAsyncFunction();
    console.log(value);
}
main2();