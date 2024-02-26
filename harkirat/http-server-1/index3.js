const path = require('path');
const express = require('express');

const app = express();


const user = [
    {
        _name : 'John',
        kidneys : 4
    },
    {
        _name : 'roman',
        kidneys : 2
    },
    {
        _name : 'david',
        kidneys : 3
    },
]
user.push({
    _name : 'gon',
    kidneys : 3
})
console.log(user);
app.get('/',(req,res)=>{
    const johnKidney = user[0].kidneys;
    let 
    res.sendFile()
})