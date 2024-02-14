// for (variable in object) {
//     // code block to be executed
// }
const person = {name: "John", age: 30, city: "New York"};
for (let key in person) {
    console.log(key + ": " + person[key]);
}
// array.forEach(function(currentValue, index, array) {
//     // code block to be executed
// });
const numbers = [1, 2, 3, 4, 5];
numbers.forEach(function(number) {
    console.log(number);
});
// for (variable of iterable) {
//     // code block to be executed
// }
const colors = ['red', 'green', 'blue'];
for (let color of colors) {
    console.log(color);
}
