const fs = require('fs');

fs.readFile('text.txt','utf-8',(err,data)=>{
    if(err) throw err;
    console.log(data);
})

fs.writeFile('newText.txt', 'This is the text that are going through writeFIle.', (err)=>{
    if (err) throw err;
})
//This the expensive call;
let counter =0;
for(let c=0; c<10;c++){
  //do nothing  
  counter++;  
  console.log(counter);
}
fs.readFile('newText.txt','utf-8', (err,data)=>{
    if (err) throw err;
    console.log(`This is reading from the write file:${data}`);
})

//Again this the more expensive call
let counter2 =0;
for(let c=0; c<10;c++){
  //do nothing  
  counter2++;  
  console.log(counter2);
}
