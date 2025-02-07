//for loop 
let a = 10 ; 
for(let i = 0 ; i<a ; i++){
    //console.log(i);
}
// using for loop with arrays 
const arr  = ["cpp","C","js","java"] ; 
for(let i = 0 ; i<arr.length ; i++){
    let element = arr[i] ; 
   // console.log(element);
}
//using break and continue 

//break 
for(let i = 0 ; i<10 ; i++){
    if(i==5) break ; 
   // console.log(i);
}

//continue 
for(let i = 0 ; i<10 ; i++){
    if(i==5) continue ; 
  //  console.log(i);
}
//<------------while----------->

let i = 1 ; 
while(i<10){
    console.log(i);
    i++ ; 
}
//do while
let marks = 91
do{
    console.log(marks);
}while(marks<90) ; 