var propertyContainer = document.querySelector('.properties');
var footer = document.querySelector('.footer');
var back2 = document.querySelector('#returning-user');
var user2 = document.querySelector('#user');
//Creating TUPLES//
var currentLocation = ['2:26 PM', 3, 'Maranpur Bypass', 20];
footer.innerHTML = currentLocation[0] + ' ' + currentLocation[1].toString() + ' ' + currentLocation[2] + ' ' + currentLocation[3];
var you2 = { Name: 'Sourav', returning: true };
function returningBack1(returning, username) {
    if (returning) {
        back2.innerHTML = ' Back Again ';
    }
    else {
        back2.innerHTML = ' to our new page ';
    }
    user2.innerHTML = username;
}
var me = { name: 'Bobby', returning: false };
returningBack1(me.returning, me.name);
