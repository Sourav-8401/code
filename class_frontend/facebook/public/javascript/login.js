let toShow = 'Arey bhaiya! Galat hai nai milaaaaa';
const show = document.querySelector('#loginCheck');
let changeUser = '';
const users = [
    {email : 'princeKumar', password : 'lund'},
    {email: 'shivamKumar', password: 'gandu'},
    {email : 'nasitTrumil', password : 'chutiya'},
    {email: 'sourav', password : '123456'},
]
function login(){
    const getUser = document.querySelector("#username").value;
    const getPassword = document.querySelector("#password").value;
    changeUser = changeUser + getUser;
    const user = users.find(u=>
        u.email === getUser && u.password === getPassword
        );
        if(user){
        console.log("found");
        show.innerHTML = '';
        // window.location.href = 'welcome.html';
        window.open('./welcome.html');
    }else{
        show.innerHTML = toShow;
    }
    console.log(`${getUser}  ${true} ${user}`);
    console.log(changeUser);
}
function change(){
    console.log(changeUser);
   const welShow = document.querySelector('.welcome');
   welShow.innerHTML = `Welcome chutiya: ${changeUser}`;
}
function openWeb(){
    window.location.href = 'https://www.joshuas.world/'
}