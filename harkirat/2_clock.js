const hr = new Date().getHours();
const min = new Date().getMinutes();
const sec= new Date().getSeconds();
function getTime(hr,min,sec){
    let am_pm;
    if(hr<12){
        am_pm = "AM";
    }
    console.log(`${hr}:${min}:${sec} ${am_pm}`);
}
getTime(hr,min,sec);


