/*
 * Write 3 different functions that return promises that resolve after t1, t2, and t3 seconds respectively.
 * Write a function that sequentially calls all 3 of these functions in order.
 * Return a promise chain which return the time in milliseconds it takes to complete the entire operation.
 * Compare it with the results from 3-promise-all.js
 */

function wait1(t) {
    return new Promise((resolve,reject)=>{
            setTimeout(()=>{
                resolve('It is resolved in '+t+" sec");
            },t*1000);
    })
}

function wait2(t) {
    const pr = new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve(`This is resolve in ${t} sec`);
        },t*1000)
    })
    return pr;
}

function wait3(t) {
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve('It is resolved in '+t+" sec");
        },t*1000);
})
}

async function calculateTime(t1, t2, t3) {
        const res1 = await wait1(t1);
        console.log(res1);
        wait2(t2).then((res2)=>{
            console.log(res2);
        }).then(()=>{
            return wait3(t3)
        }
        ).then((res3)=>{
            console.log(res3);
        })
}
calculateTime(3,4,5);