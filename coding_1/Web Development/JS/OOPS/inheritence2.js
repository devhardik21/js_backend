// class A {
//     constructor(a_var){
//         this.a_var = a_var ;
//     } 

//     a_func(){
//         console.log("this is of function A");
//         console.log(this.a_var);
//     }
// }

// class B extends A {
//     constructor(b_var){
//         super(A) ; 
//         this.b_var = b_var ;
//     } 

//     b_func(){
//         console.log("this is of function B");
//         console.log(this.b_var);
//     }
// }
// // creating a object 
// const a_obj = new A(10) ;
// const b_obj = new B(50) ;

// b_obj.b_func() ; 
// a_obj.a_func() ;


//     <---------- example -2 ------------->

class setUserName{
    constructor(username){
        this.username = username ; 
    }

    your_name(){
        console.log(`your name is ${this.username}`);
    }

}

class details extends setUserName {
    constructor(username , place){
        super(username) ; 
        this.place = place ; 
    }
    det(){
        console.log(`your details are printed here!`);
    }
}
const usr = new setUserName("hardik shandilya") ; 
const obj = new details("hardik","california") ; 

console.log(usr);
console.log(obj);