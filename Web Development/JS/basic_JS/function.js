//1
function name(something){
    console.log(typeof(something));
    console.log("hardik shandilya");
}

function second(username){
    console.log(typeof(username) );
    console.log(`${username} , Welcome to JavaScript !! `);
}

name(10) ; 
second("hardik") ;

//2
const secondway = function(a ,b){
    console.log(a+b);
}

secondway(10 ,5);

//3 using arrow function 

const sum = (x , y) => {
    console.log(x+y);
    return x + y ; 

}
sum(30,50); 

// functions with array 

const arr = [1,2,3,4,5] ; 
witharray(arr) ; 
function witharray(newarr){
    console.log("values before changing are :");
    console.log(arr[2]);
    console.log(newarr[2]);
    console.log("values after changing are :");
    newarr[2] = 55 ; 
    console.log(arr[2]);
    console.log(newarr[2]); 
}

//object with functions  
const details = {
    id : 56644 , 
    age : 56 , 
    naam : "hardik shandilya"
}
withobject(details) ; 
function withobject(obj){
    console.log(`the id , age , naam of the user is : ${obj.id} , ${obj.age} , ${obj.naam}`);
}



