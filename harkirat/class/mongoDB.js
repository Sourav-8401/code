const mongoose = require("mongoose");

mongoose.connect("mongodb://localhost:27017/");


const User = mongoose.model('Users', {name: String, email: String, password : String});


const user = new User({
    name: 'Sourav kumar',
    email : 'sourav@gmail.com',
    password: '123456'
});

user.save();