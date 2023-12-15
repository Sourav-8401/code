const propertyContainer = document.querySelector('.properties')
const footer = document.querySelector('.footer')
const back2 = document.querySelector('#returning-user')
const user2 = document.querySelector('#user')

//Creating TUPLES//
let currentLocation : [string, number, string, number] = ['2:26 PM', 3 ,'Maranpur Bypass', 20]
footer.innerHTML = currentLocation[0] + ' ' + currentLocation[1].toString() + ' ' + currentLocation[2] + ' ' + currentLocation[3]



//Practicing function and you
const you2:{Name:string; returning: boolean;} = { Name: 'Sourav', returning: true}
function returningBack1(returning: boolean , username: string){
    if(returning){
        back2.innerHTML = ' Back Again '
    }
    else{
        back2.innerHTML = ' to our new page '
    }
    if(user2 !== null){
        user2.innerHTML = username
    }
}
const me:{name:string; returning:boolean;} = {name:'Bobby', returning: false}
returningBack1(me.returning, me.name)