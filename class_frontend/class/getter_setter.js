const user = {
    name : "Priciya",
    classval : "2",
    age : "25",
    stat : "Fail",
    get getDetail() {
        console.log(this.name);
        console.log(this.classval);
        console.log(this.age);
        console.log(this.stat);
    },
    setDetail(nme, age, classval, stat){
        this.name = nme;
        this.age = age;
        this.classval = classval;
        this.stat = stat;
    }
};
user.setDetail("prince","23","2","Fail");
user.setDetail("Shivam","56","UNI","Pass");
user.getDetail();
// function set(nm){
//     let na;
//     na = nm;
//     console.log(na);
// }
// set("prince");