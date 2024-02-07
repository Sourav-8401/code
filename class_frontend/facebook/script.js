const path = require("path");
const http = require("http");
const express = require('express');
const app = express();

app.set("view engine", "ejs");
app.use(express.static('./public'));
app.get('/', 
    (req,res, err)=>{
        if(err) throw err;
        res.render('login');
    }
)
app.get('/login', (req,res)=>{
    res.render('welcome');
})
const PORT = 5000;
app.listen(PORT,()=>{console.log(`The page is running on the ${PORT}`)})