const express = require('express');
const app = express();

// app.use(req, res, path, function(){
//     console.log(`This is inside of the app.use`);
//     next();
// });

app.set("view engine", "ejs");
app.use(express.static('./public'));
app.get("/", function(req, res){
    res.render("index", {age: 12});
});
app.get("/profile/:username", function(req, res){
    res.render("about", {username: req.params.username});
});


app.listen(5001 , ()=> {console.log("server is running on PORT: 5000")});