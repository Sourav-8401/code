const path = require('path');
const fs = require('fs');
const http = require('http');

const server = http.createServer(
    (req, res) => {
        if (req.url === '/') {
            fs.readFile(
                // path.join(__dirname, 'myPublic', 'myIndex.html'),
                './mypublic/myIndex.html',
                (err,content) => {
                    if(err) throw err;
                    res.writeHead(200, {'Content-Type' : 'text/html'});
                    res.end(content);
                }
            )
        }
        if(req.url === '/about'){
            fs.readFile(
                './myPublic/about.html',
                (err, content)=>{
                    if(err) throw err;
                    res.writeHead(200,{'Content-Type':'text/html'});
                    res.end(content);
                }
            )
        }
    }
)
const PORT = 5001;
server.listen(PORT,()=>console.log(`server is running at port:${PORT}`));