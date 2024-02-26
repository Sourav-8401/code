let x = 0;
function increase(){
    x++;
    console.log(`${x}`);
}
//using the setInterval
// setInterval(increase, 1000);

//With setTimout

function withsetTimeout(counter){
    setTimeout(
        ()=>{
            console.log(counter++);
            withsetTimeout(counter);
        },
        1000
    )
}
withsetTimeout(0);