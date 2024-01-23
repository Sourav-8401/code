// console.log(__dirname, __filename);
class Person{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }
    greeting(){
        console.log(`Good morning ${this.name} and I am ${this.age} year old.`);
    }
}
module.exports = Person;