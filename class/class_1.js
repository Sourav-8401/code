const show = document.querySelector("h2");
const hour = new Date().getHours();
let greeting;
if (hour < 12) { greeting = "GOOD MORNING"; }
else if (hour > 12 && hour < 18) { greeting = "GOOD AFTERNOON"; }
else if (hour > 18 && hour < 24) { greeting = "GOOD EVENING"; }
else { greeting = "GOOD NIGHT"; }
show.innerHTML = greeting;

const day = new Date().getDay();
let showDay;
switch (day) {
    case 0:
        showDay = "Sunday";
        break;
    case 1:
        showDay = "<Monday";
        break;
    case 2:
        showDay = "Tuesday";
        break;
    case 3:
        showDay = "Wednesday";
        break;
    case 4:
        showDay = "Thrusday";
        break; 
    case 5:
        showDay = "Friday";
        break;
}
var i =0;
for(i=0;i<=10;i++){
    console.log(`${i}`)   
    if(i==3){
        break;
    }
}
const cars = ["mahindra", "TATA", "Ashok Leyland","Hero"];
let text = "";
let x = 0;
// "mahindra"
while(cars[x]){
    text = text + cars[x] + "<br>";
    console.log(cars[x]);
    x++;
}
document.querySelector("h3").innerHTML = text;
// let j=0;  
// do{
    //     console.log(`${j}`);
//     console.log(`${5+j}`);
//     j++;
// }while(j<1);

function myfunction(){
    document.querySelector('.day').innerHTML = showDay;
    alert(`Today is ${showDay}`);
}
const bodyElement = document.body.style ;
bodyElement.backgroundColor = '#00002c';
bodyElement.color = '#fff';
bodyElement.display = 'flex';
bodyElement.flexDirection = 'column';
bodyElement.justifyContent = 'center';

