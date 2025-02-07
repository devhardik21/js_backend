//for of loop in js
const array = [1,2,3,4,5,6]

for (const i of array) {
   // console.log(i);
}
//******** objects is not iterable by for of loop*********
//applying on strings

const str = "Hardik Shandilya" ; 
for (const i of str) {
   // console.log(`the every char of string s is ${i}`);
}

//applying loops on a map 

const world = new Map() ;

world.set('IN','INDIA') ; 
world.set('JP','JAPAN') ;
world.set('SP','Spain') ;

for(const [key,val] of world){
   // console.log(`your key is ${key} and your value is ${val}`);
}
for(const i of world){
   // console.log(i);              //(isme array ke form me ayega)
}