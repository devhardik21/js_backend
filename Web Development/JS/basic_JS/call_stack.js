// trying to implement an call stack 
function one(){
console.log("1");
two() ; 
console.log("1");
}

function two(){
    console.log("2");
    three() ; 
    console.log("2");
}
function three(){
    console.log("3");
    four() ; 
    console.log("3");
}
function four(){
    console.log("4");
}

one() ;
