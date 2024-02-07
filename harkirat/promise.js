
function sum(n1,n2){
    console.log(`This is the sum functiobn: ${n1+n2}`);
}
function sub(n1,n2){
    console.log(`This is sub funcion: ${n1-n2}`);
}
// function wait(){
//     setTimeout(sum, 2000);
// }


let myPromise = new Promise((subb, runAfterDone)=>{
    subb();
    console.log("THis is running inside the myPromise")
    runAfterDone();
})

let counter =0;
//Doing the expensive call:
for(let i =0; i<10000; i++){
    counter++;
}
console.log(counter);
myPromise.then(sub(10,5),sum(5,2));
for(let i =0; i<10000; i++){
    counter++;
}
console.log(counter);