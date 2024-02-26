const express = require('express');
const jwt = require('jsonwebtoken');
const bodyParser = require('body-parser');
const jwtPassword = "12345";
const app = express();
app.use(express.json());
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

function userExists(username , password){
    let i =0;
    while(i<user.length){
        if(user[i].username == username && user[i].password == password){
            return true;
        }
        i++;
    }
    return false;
}

app.get('/',(req,res)=>{
    res.send("<h1>This is home page</h1>");
})

app.post('/signin',function(req,res){
    const username = req.body.username;
    const password = req.body.password;
    if(!userExists(username,password)){
        return res.status(403).json({
            msg: "user doesnt exist in our in memory db",
        })
    }

    var token = jwt.sign({username},jwtPassword);
    return res.json({
        token,
    })
})
app.get('/user',function(req,res){
    const token = req.headers.authorization;
    const decoded = jwt.verify(token,jwtPassword);
        const username = decoded.username;
        res.json({
            users: user
        })
    
});

app.listen(3000);