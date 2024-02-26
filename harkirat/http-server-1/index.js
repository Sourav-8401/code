const express = require('express');
const bodyParser = require('body-parser');
const app = express();

// app.get("/", function(req, res){
//     res.send("index", {age: 12});
// });
app.use(express.json())
app.get('/',(req,res)=>{
    res.send('<b>Hi there</b>');
})
app.post(
    '/my-message', 
    (req, res)=>{
        const mes = req.body;
        console.log(mes);
        res.json(
            {output : "4+5=10",
        }
        )
        const quer_mes = req.query.message;
        console.log(quer_mes);
        console.log(req.headers.authorization);
    }
)

let PORT = process.env.PORT || 5000;
app.listen(PORT, ()=> { console.log(`THe sever is running on port ${PORT}`)})

