// String Types mini-challenge
// Write a function that will display the most recent reviewers name next to the review total,
// making sure to assign a type to the parameter, to prevent unwanted behaviour.
// : string
var reviewTotalDisplay = document.querySelector('#reviews');
var reviewDisplay = document.querySelector('#display');
var addN = document.querySelector('#add');
var user = document.querySelector('#user');
var back = document.querySelector('#returning-user');
var reviews = [
    {
        name: 'Sheia',
        stars: 5,
        loyaltyUser: true,
        date: '01-04-2021'
    },
    {
        name: 'Andrzej',
        stars: 3,
        loyaltyUser: false,
        date: '28-03-2021'
    },
    {
        name: 'Omar',
        stars: 4,
        loyaltyUser: true,
        date: '27-03-2021'
    },
];
//Returning function " Welcome back booby"
var you = {
    username: 'Sourav',
    returning: true,
    home: ['hekk', 'onam', 'kapoor', 'sitaro'],
    random: ['omar', 12, 2],
};
function returningBack(returning, u1) {
    if (returning) {
        back.innerHTML = ' Back ';
    }
    user.innerHTML = u1;
}
returningBack(you.returning, you.username);
// Solution
function showReviewTotal(value, reviewer, loyal) {
    var loyalty;
    if (loyal) {
        loyalty = '⭐';
    }
    reviewTotalDisplay.innerHTML = 'review total ' + value.toString() + '| last reviewed by ' + reviewer + loyalty;
}
showReviewTotal(reviews.length, reviews[0].name, reviews[0].loyaltyUser);
function DisplayEle(name, stars, user, date) {
    reviewDisplay.innerHTML = 'Name: ' + name + ' stars: ' + stars + ' User: ' + user + ' Date: ' + date;
}
DisplayEle(reviews[0].name, reviews[0].stars, reviews[0].loyaltyUser, reviews[0].date);
function addNumber(a, b) {
    addN.innerHTML = (a + b).toString();
}
addNumber(5, 6);
