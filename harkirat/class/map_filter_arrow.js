const arr = new Array(5);
const arr2 = [1,2,3,5,6];

const newArr = [];
for(let i of arr2){
    newArr.push(i*2);
}
// newArr.forEach((val)=>{
//     console.log(val);
// })
console.log(newArr);
function mul2(i){
    return i*2;
}
//******** Map(arr2,mul2())*******************

//MAP

const ans = arr2.map(mul2);
console.log(ans);


//My Own map function


function myMap(arr, transform){
    let mapArr = [];
    let mapVal;
    for(let i of arr){
        mapVal = transform(i);
        mapArr.push(mapVal);
    }
    return mapArr;
}

const myMapans = myMap(arr2, (i)=>{return i*3});
console.log(myMapans);


const ans2 = arr2.map((i)=>{
    if(i%2 == 0){
        return i;
    }
})
console.log(ans2)