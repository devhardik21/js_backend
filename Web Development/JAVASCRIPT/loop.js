            // FOR LOOP
let x=5;
for (let i = 0; i <x; i++) {
    console.log(i);
}

console.log("for-each loop");
let y=5;
for (let i = 0; i < y; i++) {
   console.log(y+i);
}
            // FOR IN LOOP
let a={
    "name":"hardik",
    "job":"SDE at Amazon",
     "college": "BITD"
}
for (const key in a) {
    {
      console.log(key);  
    }
}
            // FOR-OF LOOP
for (const c of "hardik"){
    console.log(c);
}
            // WHILE LOOP
let p=4;
while (p<=10) {
    console.log(p);
    p=p+2;
}
            // DO-WHILE LOOP
let d=11;
do {
    console.log(d);
} while (d<10);