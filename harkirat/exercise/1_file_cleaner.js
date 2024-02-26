const { count } = require('console');
const fs = require('fs');
fs.readFile(
    'text.txt', 'utf-8', (err, data) => {
        if (err) throw err;
        let dat = data;
        console.log(dat);
        let temp = '';
        let i = 0;
        function removeSpace(myString) {
            while(myString[i] === ' ') {
                i++;
            };     //11   
            while (i < myString.length) {
                let j = i;
                let count = 0;
                while (myString[j] === ' ') {
                    j++;
                    count++;
                }
                let rem = 0;
                while (rem < count - 1) {
                    i++;
                    rem++;
                }
                temp = temp + myString[i];
                i++;
            }
            return temp;
        }
        dat = removeSpace(dat);
        fs.writeFile('text.txt',dat,(err)=>{
            if (err) throw err;
        });
    }
)
