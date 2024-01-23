const fs = require('fs');
const path = require('path');


//Create folder
// fs.mkdir(path.join(__dirname, '/newFolder'), {}, err =>{if(err) throw err;});

//create and write to file

// fs.writeFile(path.join(__dirname, '/fs.txt'), 'Hello world', err =>{if(err) throw err; console.log('File written to...')});


// fs.mkdir(path.join(__dirname, './practice'), {}, err => {if(err) throw err;});
fs.writeFile(path.join(__dirname, './practice/01.fs_practice.js'),
    'Hello new file created',
    err => {
        if (err)
            throw err;
       console.log( 'practice file created');
    });

// Appending to the file

fs.appendFile(path.join(__dirname, 'fs.txt'), ' This is the append text.', err => {
    if(err) throw err;
    console.log('File appended');
}  );

// reading the file   readfile(location, font-code, err(callback))
fs.readFile(path.join(__dirname, 'fs.txt'), 'utf8', (err, data) =>{
    if(err) throw err;
    console.log(data);
} );

//rename the file
fs.rename(
    path.join(__dirname, 'fs.txt'),
    path.join(__dirname,'file.txt'),
    (err) => {
        if(err) throw err;
        console.log('File renamed');
    }
)