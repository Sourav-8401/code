let taskList = [];
let data = [];
let a =0;
let show = '';
let cartQuantity = 0;
updateCartQuantity(cartQuantity);
function updateCartQuantity(change) {
    const dis = document.querySelector('.display');
    if (cartQuantity + change > 10) {
        dis.innerHTML = "The cart is full" ;
        return;
    }

    if (cartQuantity + change < 0) {
        dis.innerHTML = "Not enough items in the cart"
        return;
    }

    cartQuantity += change;
    // console.log(`Cart quantity: ${cartQuantity}`);
    dis.innerHTML = `Cart quantity:${cartQuantity}`;
}

function getNum(num){
    data.push(num);
    show = show + num;
    // showAt = document.querySelector('.js-show');
    // showAt.innerHTML =`${show}`;
    display();
}
function backSpace(){
    show = document.querySelector('.js-show');
    const lastIndex = data.length - 1; 
    console.log(data);
    data.splice(lastIndex, 1)
    display();
}
function display(){
    show = document.querySelector('.js-show');
    let showElement = '';
    console.log(data);
    for(let i=0; i<data.length;i++){
        showElement += data[i];
    };
    show.innerHTML = `${showElement}`;
}
// function calculation(){
//     let operator = '+';
//     case operator === '+':
//         a = a+a;
// }
// + calcut(1111, + ) = num2 
function calculate(){
    let a = '';
    for(let i =0; i<data.length; i++){
        if(data[i] === '+'){
            console.log(`encounter${data[i]}`);
            const len = data.length;
            data.splice(0,len);
            data.push(a);
        }else{
            a += data[i];
        }
    }
    const len = data.length;
    data.splice(0,len);
    data.push(a);
    display();
}


// to do java script

        //----------------BASICS OF ARRAY------------------------------------


        myarray = [12, 11, 4, 'ass', 'hello', { name: 'sourav' }];
        console.log(myarray);
        console.log(myarray[1]);
        console.log(myarray.length);
        console.log(Array.isArray(myarray));
        myarray.push(11);
        console.log(myarray);
        myarray.splice(0, 2) //it will remove 2 values starting from 0 index;


        //----------------PROJECT---------------------------------------------------



        // 1.A TO DO LIST : it will add task to your array
        // algo: let a list : array1 = [ wake up , to bursh , take bath, take breakfast]

        function enterHandler(event) {
            if (event.key === 'Enter') {
                createList();
            }
        }
        function showList() {
            let showEachTask = '';
            const show = document.querySelector('.js-showList');
            for (let i = 0; i < taskList.length; i++) {
                showEachTask += (`<p>${i + 1}.${taskList[i]}</p>
                <button onclick="taskList.splice(${i},1);
                showList()">Done</button>`);
            }
            show.innerHTML = showEachTask;
        }
        function createList() {
            let task = document.querySelector('.js-getTask');
            const name = task.value;
            taskList.push(name);
            task.value = '';
            showList();
        }
        function deleteList() {
            const lastIndex = taskList.length - 1;
            taskList.splice(lastIndex, 1);
            showList();
        }
        function resetList() {
            const len = taskList.length;
            taskList.splice(0, len);
            showList();
        }