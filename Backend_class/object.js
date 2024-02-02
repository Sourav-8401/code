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

