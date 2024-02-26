const express = require('express');
const jwt = require('jsonwebtoken');

const app = express();

const jwtPassword = "12345";
app.use(express.json());
user = [
    {
        username : "sourav@gmail.com",
        password : "123"
    },
    {
        username : "alok@gmail.com",
        password : "123"
    },
    {
        username : "harsh@gmail.com",
        password : "123"
    }
];


function userExist(username, password){
    for(let i=0;i<user.length;i++){
        if(user[i].username == username && user[i].password == password){
            return true;
        }
    }
    return false;
}
app.post('/signin',(req,res)=>{
    const username = req.body.username;
    const password = req.body.password;
    if(!userExist(username,password)){
        return res.status(403).json({"msg": "This is invalid username password"});
    }
    var token = jwt.sign({username: username}, jwtPassword);
    return res.json({
        "Token" : token
    });
})
app.get('/users', (req,res)=>{
    let getUser;
    const token = req.headers.authorization;
    try{
        const verToken = jwt.verify(token, jwtPassword);
        getUser = verToken.username;
    }catch(err){
        return res.status(403).json({
            "msg": "User not verified"
        });
    }
    res.json({
        users : user.filter((val)=>{
            if(val.username == getUser){
                return false;
            }else{
                return true;
            }
        })
    });
})



//JWT MY LEARNING
const mytoken = jwt.sign("hello","1234");
console.log(mytoken);
const token = jwt.sign({username: "heo@gmail.com"},"12342");
const varData = jwt.verify(token, "12342");
console.log(varData);

app.listen(3001);
