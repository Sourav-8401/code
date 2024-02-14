/**
 * what is async?
 * what is await?
 * How async await works behind the scenes?
 * Example of using async/await
 * Error handling
 * Interviews
 * Async await vs Promise.then/.catch
 */
const p1 = new Promise(function(res,rej){
    setTimeout(
        function(){
            res("First Promise Resolved Value!");
        }, 15000
    );
});
const p2 = new Promise(function(res,rej){
    console.log("This is inside of the promise");
    console.log("This is inside of the promise");
    setTimeout(
        function(){
            res("Second Promise Resolved Value!");
        }, 25000);
    console.log("Below This is inside of the promise");
});



///****************************(Basic)************************************************ */
//alwayse return a promise
// async function getData(){
//     return p;
// }
// const dataPromise  = getData();

// dataPromise.then((res)=>console.log(res));

//**ASYNC FUNCTION RETURNS A PROMISE***************************** */
console.log("Outside Upper promise");

///*********************************************************2nd */*************** */
async function handlePromise(){
    console.log("Before promise");
    const val1 = await p1;
    console.log("Before promise");
    console.log(val1);
    
    console.log("Before promise");
    const val2 = await p2;
    console.log("middle promise");
    console.log(val2);
    console.log("After promise");
    console.log("After promise");
}
handlePromise();
console.log("Outside promise");
console.log("Outside promise");