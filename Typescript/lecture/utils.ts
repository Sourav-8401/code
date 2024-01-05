
const reviewTotalDisplay = document.querySelector('#reviews')
const reviewDisplay = document.querySelector('#display')
const addN = document.querySelector('#add')
const user = document.querySelector('#user')
const back = document.querySelector('#returning-user')
// import { LoyaltyUser, Permissions } from './enums'
export function returningBack(returning: boolean, u1: string) {
    if (returning) {
        back.innerHTML = ' Back '
    }
    user.innerHTML = u1

}
// Solution
export function showReviewTotal(value: number, reviewer: string, loyal: boolean) {
    let loyalty
    if (loyal) {
        loyalty = '⭐'
    }
    reviewTotalDisplay.innerHTML = 'review total ' + value.toString() + '| last reviewed by ' + reviewer + loyalty
}

export function DisplayEle(name: string, stars: number, user: boolean, date: string) {
    reviewDisplay.innerHTML = 'Name: ' + name + ' stars: ' + stars + ' User: ' + user + ' Date: ' + date
}