var buf = new Buffer.alloc(256);
len = buf.write("Simpl");
console.log("Octets written: "+ len);


var buf2 = new Buffer.alloc(550);
for(let i= 0; i<26;++i){
    buf[i] = 97 + i;
}
console.log(buf.toString("ascii: "));
console.log(buf.toString("ascii: "));
console.log(buf.toString("ascii: "));
console.log(buf.toString("ascii: "));