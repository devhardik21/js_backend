////////// NUMBERS //////////////
let a = 100;
console.log(a);
console.log(a.toString());
let b = a.toString();
console.log(b, typeof (b));
console.log(a.toString());
let num = 100.30545039;
console.log(num.toFixed(3));

let numb = 234.8997
console.log(numb.toPrecision(5));
let hundred = 100000000;
console.log(hundred.toLocaleString('en-IN'));

const min = 10 ; 
const max = 20 ; 

console.log(Math.floor(Math.random() * (max - min + 1)) + min)


//Your code generates a random integer between the values of min and max, inclusive. Here's how it works:

// Math.random() generates a floating-point number between 0 (inclusive) and 1 (exclusive).
// (max - min + 1) defines the range (in this case, 11 since max is 20 and min is 10).
// Multiplying Math.random() by the range gives a floating-point number between 0 and the range.
// Math.floor() rounds down the result to ensure it is an integer.
// Finally, adding min adjusts the result to be within the desired range (from 10 to 20).
// Thus, console.log(Math.floor(Math.random() * (max - min + 1)) + min) prints a random integer between 10 and 20 (inclusive).