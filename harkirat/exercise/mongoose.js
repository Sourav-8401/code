const moongose = require("mongoose");
const express = require("express");
const app = express();

moongose.connect("mongodb://localhost:27017");

const User = moongose.model('User2',{username: String, password : String });

const user = new User({
    username : "alok@gmail.com",
    password : "123423"
});
user.save();




app.post('/signin',(req,res)=>{
    const username = req.body.username;
    const password = req.body.password;
    
})