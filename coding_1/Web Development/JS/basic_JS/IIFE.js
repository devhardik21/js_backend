(function name(){
    username = "hardik shandilya" ; 
    console.log(username);
})() ; 

( () =>{
    console.log("this is an unnamed IIFE");
}
)() ;

( function () {
        console.log("this is also an unnamed IIFE ");
    }
)() ;

(
    function sum(a,b){
        console.log(a+b);
    }
)(10,50)  ;