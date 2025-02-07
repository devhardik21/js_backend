
const sym = Symbol("symbol") ;
const user = {
    name : "hardik shandilya", 
    rno : 18,
    fullname : "dev hardik",
    "using double" : "hs doing js",
    [sym] : "symbol"
}

console.log(user.name);
console.log(user["rno"]) ;
console.log(user["using double"]);
console.log(typeof user.fullname);
console.log(typeof user.rno);
console.log(typeof user[sym]);
user.adding = "this is added in the object" ; 

console.log(user);
console.log(typeof(user.adding));



//nesting of objects 


const details = {
    id : 8545,
    recog : {
        uname:{
            firstname : "hardik",
            lname : "shandilya"
        }
    } 
}

console.log(details.recog.uname.firstname);

const ob1 = {1:"a",2:"b"} ; 
const ob2 = {3:"c",4:"d"}  ;
const ob3 = {...ob1 , ...ob2}; 
console.log(ob3);

//3 

const data = [

    {
        id : 45566, 
        n : "hs"
    },
    {
        id : 45566, 
        n : "hs"
    },
    {
        id : 45566, 
        n : "hs"
    }
]

console.log(data[1].id);

//object important stuffs 
console.log(Object.keys(user));
console.log(Object.values(user));
console.log(Object.entries(user));
//it returns the output in the form of array


//deconstruction
const {fullname} = user ; 
console.log(fullname);
const {fullname:fname} = user ;  
 console.log(fname);







