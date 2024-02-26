const express = require('express')
const app = express();
app.use(express.json);


function middleware(req,res, next){
    fetch().then(()=>{
        next();
    }
    )
}


app.post('/health-checkup', (req,res)=>{
    const kidneys = req.body.kidneys;

    const kidneyslen = kidneys.length;
    res.send("you have" + kidneyslen + "kidneys");

});

app.use((err,req,res,next)=>{
    res.json({
        msg: "Sorry something is up with our server"
    })
})