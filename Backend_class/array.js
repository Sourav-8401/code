let fruits = ['apple','grapes'];
console.log(fruits.indexOf('grapes') + fruits.indexOf('apple'));


let fruit2 = ['Banana', 'Apple', 'Orange', 'Mango'];
let flen = fruit2.length;
let showFruits = "";
for(let k =0; k<flen; k++){
    showFruits += `<li>${fruits[k]}</li>`;
    console.log(showFruits);
}

fruit2.sort();
console.log(fruit2);
console.log(fruit2.slice(0,2))
console.log(fruit2);
console.log(fruit2.splice(0,2))
console.log(fruit2);
setTimeout(delayFunction, 3000);



