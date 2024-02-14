var zlib = require('zlib');
var fs = require('fs');
var gzip = zlib.createGzip();
var r = fs.createReadStream('notes.txt');
var w = fs.WriteStream('write.txt.gz');

r.pipe(gzip).pipe(w);
console.log('configuring the file....');
