// String Types mini-challenge
// Write a function that will display the most recent reviewers name next to the review total,
// making sure to assign a type to the parameter, to prevent unwanted behaviour.
// : string

const reviewTotalDisplay = document.querySelector('#reviews')
const reviewDisplay = document.querySelector('#display')
const addN = document.querySelector('#add')
const user = document.querySelector('#user')
const back = document.querySelector('#returning-user')
const reviews: { name: string; stars: number; loyaltyUser: boolean; date: string; }[] = [
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
]

//Returning function " Welcome back booby"
const you: { username: string; returning: boolean; home: string[]; random: (string | number)[] } = {
    username: 'Sourav',
    returning: true,
    home: ['hekk', 'onam', 'kapoor', 'sitaro'],
    random: ['omar', 12, 2],
}

function returningBack(returning: boolean, u1: string) {
    if (returning) {
        back.innerHTML = ' Back '
    }
    user.innerHTML = u1

}

returningBack(you.returning, you.username)




// Solution
function showReviewTotal(value: number, reviewer: string, loyal: boolean) {
    let loyalty
    if (loyal) {
        loyalty = '⭐'
    }
    reviewTotalDisplay.innerHTML = 'review total ' + value.toString() + '| last reviewed by ' + reviewer + loyalty
}

showReviewTotal(reviews.length, reviews[0].name, reviews[0].loyaltyUser)
function DisplayEle(name: string, stars: number, user: boolean, date: string) {
    reviewDisplay.innerHTML = 'Name: ' + name + ' stars: ' + stars + ' User: ' + user + ' Date: ' + date
}
DisplayEle(reviews[0].name, reviews[0].stars, reviews[0].loyaltyUser, reviews[0].date)

function addNumber(a: number, b: number) {
    addN.innerHTML = (a + b).toString()
}
addNumber(5, 6)

const given: { title: string; price: number; address: string; city: string; pincode: number; country: string; contact: number; available: boolean; }[] = [
    {
        title: 'hello',
        price: 55,
        address: 'XSf',
        city: 'gaya',
        pincode: 8203001,
        country: 'India',
        contact: 8409558239,
        available: true,
    },
    {
        title: 'hello',
        price: 55,
        address: 'XSf',
        city: 'gaya',
        pincode: 8203001,
        country: 'India',
        contact: 8409558239,
        available: true,
    },
    {
        title: 'hello',
        price: 55,
        address: 'XSf',
        city: 'gaya',
        pincode: 8203001,
        country: 'India',
        contact: 8409558239,
        available: true,
    }
]