const car = {
    speed: 20,
    color: 'Red',
    company: 'Mahindra'
}
console.log(car);

// object creation using constractor and new keyword //it is used to create the 
var student = new Object();
student.name = 'Amit';

// creating obj using constructor
const book = {
    id : '12' ,
    issued : '-' ,
    showDetail: function(){
        return this.id+" "+this.issued ; 
    }
}

// var arr = new 
console.log(student);
console.log(book.showDetail());

let myObj = {
    name: "data",
    myfun: function sum(a, b) { return a + b; },
    class: "10",
    age: "20",
};

// Loop through the keys of the object and print each key-value pair
for (let key in myObj) {
    console.log(key + ": " + myObj[key]);
}
