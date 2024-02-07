// let a = Number(prompt("ENTER A: "));
// let c = Number(prompt("ENTER C: "));
// let b = Number(prompt("ENTER B: "));
sum = (n1, n2, n3) => {
    return n1 + n2 + n3;
}
//console.log(sum(a,b,c));
console.log("sum is " + sum(10, 15, 20));

let user = {
    name: "Sourav",
    reg_no: "12211334",
    key1: "value1",
    sub_val : "",
    sub: (a, b) => {
        return a - b;
    },
    finalMul : (n1)=>{

    }

}

console.log(user["sub_val"]);
console.log(user.sub(20, 30));
user.sub_val = user.sub(20,10);
console.log(user["name"]);
console.log(user["sub_val"]);

let fs = require("fs");
const http = require('http');

http.createServer('index.html',(req,res)=>{
    if(req === "/" ){
        console.log(data);
    }
})


const express = require("express");
const app = express();
app.get(
    "/",(req,res)=>{

    }
)