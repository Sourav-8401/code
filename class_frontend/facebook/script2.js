const http = require('http');
const path = require('path');
let myServer = http.createServer(
    (req,res)=>{
        if(req === '/'){
            res.end()
        }
    }
)