const path = require('path')
console.log(__filename); // Give the path of this file

//Base file name
console.log(`this is the file name: ${path.basename(__filename)}`); // Give the file name

//Directory name
console.log(`this is the dir name: ${path.dirname(__filename)}`); // Give the file name

//File extension
console.log(path.extname(__filename));

// Create path object
console.log(path.parse(__filename));
console.log(path.parse(__filename).base);

// Concatenate paths
// ../test/hello.html

console.log(path.join(__dirname, 'test', 'index.html'));

