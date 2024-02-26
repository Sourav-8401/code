// Importing express module
const express = require('express');
const path = require('path');

const app = express();

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname,'index.html'));
});

app.listen(5001, () => {
    console.log('Server is running on port 5001');
});
