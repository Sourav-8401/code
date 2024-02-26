const http = require('http')
const express = require('express')
const url = require('url');
const app = express();
const path = require('path');

app.use(express.json());


app.get('/',(req,res)=>{
    res.send("<h1>This is demo<h1>")
})
app.get('/sign',(req,res)=>{
    res.sendFile(path.join(__dirname,'sign.html'));
    const myquery = req.query;
    console.log(myquery);
})
app.listen(5001);