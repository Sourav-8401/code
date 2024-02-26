let p = new Promise(function(onDone){
    onDone('hi there');
})

p.then(function(toPrint){
    console.log(toPrint);
})


// ANOTHER VERSION       
var myPromise = new Promise(function(resolver){
    resolver("foo");
});
function callback(){
    console.log(myPromise);
}
myPromise.then(function(){
    console.log(myPromise);
})

