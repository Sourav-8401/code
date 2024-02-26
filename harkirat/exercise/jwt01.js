const express = require('express');
const app = express();
const jwt = require("jsonwebtoken");
const jwtPassword = "12345";


import { z } from zod;
user = [
    {
        username : 'harkirat@gmail.com',
        password : '123',
        name : "harkirat singh"
    },
    {
        username : "raman@gmail.com",
        password : "123321",
        name : "Raman singh"
    },
    {
        username : "priya@gmail.com",
        password : "123321",
        name : "Priya kumari"
    }
];

const user = z.object({
    
})

function validation(username, password){
    let check = false;
    zod.
    if(check && password.lenght>6){
        const token = jwt.sign({username : username},jwtPassword);
        return token;
    }else{
        return null;
    }
}


app.post()

console.log(validation("priya@gmail.com","123321"));