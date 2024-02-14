const fs = require('fs');
fs.readFile('myFile.txt', (err, data)=>{
    if(err) throw err;
    console.log(data.toString());

})
// synchronous read
let data = fs.readFileSync('myFile.txt');
console.log(data.toString());


fs.stat('myFile.txt',(err, stats)=>{
    if (err) throw err;
    console.log(stats);
    console.log(`ISFILE: ${stats.isFile()}, ISDIR: ${stats.isDirectory()} Size: ${stats.size}`);
})