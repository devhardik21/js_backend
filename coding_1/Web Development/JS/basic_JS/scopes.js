let a = 50 ; 
var b = 50 ; 
const co = 50 ; 

if(true){
    a = 75 ; 
    console.log("a is",a);
    b = 75 ; 
}

console.log('a is',a);
console.log('b is',b);
console.log('co is',co);

function one(){
    username = "hardik" ; 
    rno = 18 ; 
    console.log("first function is called successfully");
    two() ;
    function two(){
        newuser = username + " from goldman sachs" ;
        console.log(newuser);
    }
}

one();
