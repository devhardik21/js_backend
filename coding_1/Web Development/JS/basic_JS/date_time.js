let a = new Date()
console.log(a);
console.log(a.toString()); //converts the date into readable form 
console.log(a.toDateString()) ; //shortens it more 
console.log(typeof a);

//creating dates
let mydate = new Date(2024,10,21); //here the month starts from 0th index 
console.log(mydate);
console.log(mydate.toString());
console.log(mydate.toDateString());
console.log(mydate.toLocaleDateString());
//but if we directly input dates, the case will be a little different 
//like the months wont start from zero
let d = new Date("11-21-2024")
console.log(d);
console.log(d.toLocaleString()) ; 

//we can also have current dates in js like in ms.....its reference is from 1970 to now

let mytimestamp = Date.now() ;
console.log(mytimestamp);
//its in ms 
//in second it would be : 
console.log(Math.floor(mytimestamp/1000 ));

