// const a = [1,2,3,4] ; 
// //console.log(typeof a);

// const str = 12 ; 
// //console.log(typeof str);

// function Data(username , place){
//   this.username= username ;
//   this.place = place;
// }

// const user1 =new Data("hardik","durg");
// console.log(user1);

// even a function is an object in js

function userDetails(name ,salary){
    this.name = name  ;
    this.salary = salary ;
}
const hardik = new userDetails("hardik",100000) ; 
const deva = new userDetails("deva",200000) ; 

console.log(hardik);
console.log(deva);


// console.log(userDetails.prototype);

userDetails.prototype.greet= function(){
      console.log(`Hello Mr.${this.name}.You are welcome to our website.Your salary is ${this.salary}`);
}

// console.log(deva.greet());

// console.log(deva.prototype);
console.log(deva.__proto__);
 console.log(userDetails.prototype);



