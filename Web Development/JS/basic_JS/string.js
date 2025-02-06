let str = "hardik shandilya" ;
console.log(`your name is ${str} `);
//concatinating two strings
console.log(str + " after concatination ");
let a = "first string "
let b  = "second string"
let c = a + b ; 
console.log(c) ;
//we can access the elements of the strings using indexes 
console.log(str[2]);
console.log(str.toUpperCase());
newstr = str.substring(0,6) ;  //creates a new substring 
console.log(newstr);
string = "             hardik      likes coding                "
console.log(string.trim());
//using the slicing function 
let str3 = str.slice(0,4) ; 
console.log(str);
console.log(str.indexOf("r"));
console.log(str.charAt(1));
// using the replace function
let str4 = "hardik-21gmail.com"
console.log(str4.replace('-','@'));
//
let str5 = "hardik-21gmail.com"
console.log(str4.replace('-21','@'));
//using split function 
let string5 = "hardik-java-script"; 
console.log(string5.split('-'));

const url = "https://hitesh.com/hitesh%20choudhary"

console.log(url.includes('com'))


