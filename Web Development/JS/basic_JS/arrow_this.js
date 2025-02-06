
// // this with object
// const user = {
//     name : "hardik" , 
//     id : 18 ,
//     welcome_msg : function(){
//         console.log(`${this.name} , welcome to our website`);
//         console.log(this);
//     }
// }
// user.welcome_msg() ; 


// 2 using this globally.....
//console.log(this);



// 3 using this with an function..........
function one() {
 console.log(this);
}

one();

function two(){
    let username = "hardik"
    console.log(this.username);
}
two() ;

// now coming to arrow functions 

// const add =  (a,b) => {
//     return a + b ;
// }
// console.log(add(10,5));

// const sum = (a,b) => a+b

// console.log(sum(10,20));

// const adder = (a,b) => (a+b) ; 
// console.log(adder(80,20));

// // returning an object 

// const obj_return = () => ({name:"hardik",age:18,job:"sde at goldman sachs"}) ; 
// console.log(obj_return());


