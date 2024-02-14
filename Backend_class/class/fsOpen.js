const { error } = require('console');
const fs= require('fs');
fs.open('myFile.txt', (err,data)=>{
    if (error) {return console.log(err);};
    console.log('File opened successfully');
})