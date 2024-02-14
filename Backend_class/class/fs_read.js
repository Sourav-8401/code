const fs = require('fs');

const buffer = new Buffer.alloc(1024);
// console.log(buffer);

fs.open('mytext.txt', 'r+', function(err, fd){
    if (err) throw err;
    // file_loc , storage, offset, length, pos, callback 
    fs.read(fd, buffer, 0, buffer.length, 0, function(err,bytes){
        if(err) throw err;
        if(bytes>0){
            const data = buffer.slice(0,bytes).toString();
            console.log(data);
        }
    })
})

