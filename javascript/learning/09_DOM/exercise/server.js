const path = require('path');
const fs = require('fs');
const http = require('http');

const server = http.createServer(
    (req, res) =>{
        if(req.url === '/'){
            fs.readFile(
                path.join(__dirname, '9i.html'),
                (err, content) =>{
                    if(err) throw err;
                    res.writeHead(200,{"Content-Type" :"text/html"}),
                    res.end(content,'utf8');
                }
            )
        }
    }
)
const PORT = process.env.PORT || 5000;
server.listen(PORT, ()=>{console.log(`Server is running in the port: ${PORT}`)});
