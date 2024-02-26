let http = require('http');
let url = require('url')
let fs = require('fs');
const { log } = require('console');
http.createServer(function (req,res){
    let q = url.parse(req.url,true);
    let filename = "." + q.pathname;
    fs.readFile(filename,function(err,data){
        if(err){
            res.writeHead(404,{'Content-Type' : 'text/html'});
            return res.end("404 Not found");
        }
    })
    res.writeHead(200,{'Content-Type':'text/html'});
    console.log("demo")
    return res.end();
}).listen(5000);