const express = require('express');
const body = require('body-parser');
const app = express();

// app.get("/", function(req, res){
//     res.render("index", {age: 12});
// });
app.use(app.json())
app.get(
    "/", (req, res)=>{
        res.send("index");
    }
)
app.post(
    '/my-message', 
    (req, res)=>{
        const mes = req.body.message;
        console.log(mes);
        res.json(
            {output : "2+2 = 4",
        }
        )
    }
)

let PORT = process.env.PORT || 5000;
app.listen(PORT, ()=> { console.log(`THe sever is running on port ${PORT}`)})

