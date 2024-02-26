const express = require('express');
const app = express();

//Global catches

app.get('/health-checkup',(req,res)=>{
    const getKidney = req.query;
    console.log(getKidney);
    console.log("jehasp");
    console.log(JSON.stringify(req.query));
})

app.use((err,req,res,next)=>{
    res.json({
        msg:"Sorry something is up with our server",
    })
})
app.listen(4000,()=>{
    console.log("running");
});




//querylearn
//http://localhost:4000/health-checkup?kifneys=kadsgkla&this=kisldk&name=sourav
// { kifneys: 'kadsgkla' }
// jehasp
// { kifneys: 'kadsgkla,hello="imdsgka"' }
// jehasp
// { kifneys: 'kadsgkla?this=kisldk' }
// jehasp
// { kifneys: 'kadsgkla', this: 'kisldk', name: 'sourav' }