const fs = require('fs');


fs.readFile('student.json',(err, data)=>{
    if(err) throw err;
    let file =  JSON.parse(data);  // FOR PARSING THE JSON DATA INTO OBJECT
    console.log(file);
    const myJson = JSON.stringify(file);
    console.log("this is the json file using the stringfy: "+ myJson);

    fs.writeFile('newJson.json', data, (err)=>{
        if (err) throw err;
    })
} );

let data = ' ';
// create a readable stream
let reader = fs.createReadStream('text.txt');

// set the encoding to be utf-8;

reader.setEncoding('utf-8');

// handle steam events --> data, end, and error

reader.on('data',function(chunk){
    data = chuck
})

console.log(reader);

let myJsonFile = JSON.stringify(myObj);
console.log(myJsonFile);
console.log(myval);

let myObj = {
    name : "data",
    myfun : (a,b)=>{ return a+b;},
    class : "10",
    age : "20"
}
myObj.myval = myObj.myfun(5,10);
console.log(myObj.val);
console.log(myObj);