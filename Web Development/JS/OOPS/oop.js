// using a object constructor 

function Car(color,brand){
    this.color = color ; 
    this.brand = brand ; 
}

const car1 = new Car('red','ford'); 
const car2 = new Car('black','innova') ; 

 console.log(car1,typeof car1); 
 console.log(car2);
 console.log(Car, typeof Car);

// Example 2 of an object constructor

function Data(username , sal ,isLoggedIn){
    this.username = username ; 
    this.sal = sal ; 
    this.isLoggedIn = isLoggedIn ;

    this.greeting = function greet(){
        console.log(`Hello Mr.${this.username}.Your salary is ${this.sal}`);
    }
}

const user1 = new Data("hardik",100000,true) ;
const user2 = new Data("ritik",200000,true) ;

console.log(user1);
console.log(user2);

console.log(user1.greeting());
console.log(user2.greeting());


