//            <-------------filter----------->
const values = [1,2,3,4,5,6,7,8,9,10]
const filtered_val = values.filter( (num) =>{
    return num>5
})
// console.log(filtered_val,typeof filtered_val)
// console.log(typeof values);

const example = values.filter( (val) => (val===7))
console.log(example);

//             <-------------maps-------------->

const numbers = [1,2,3,4,5]
const ten_added = numbers.map((value) => (value+10))
console.log(ten_added);

//<---------chaining of functions--------------->
const numbs = [1,2,3,4,5,6,7,8,9,10]
const ans = numbs
                .map((val)=>(val*10))
                .map((a)=>(a+1))
                .filter((b)=>(b>40))

console.log(ans); 

// <-------------reduce------------------------->
const num = [1,2,3]

const sum = num.reduce( (acc,curr)=>(acc+curr),0)
//console.log(sum,typeof sum);

const ans_func = num.reduce( function(acc, curr){
    console.log(`the value of acc is ${acc} and value is ${curr}`);
    return acc + curr; 
},0)
console.log(ans_func);
