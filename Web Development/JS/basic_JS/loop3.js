// for in loop 

const lang = {
    "py" : "python",
    "js" : "javascript", 
    "cpp" : "C++"
}
for (const key in lang) {
 //  console.log(`the full-form of ${key} is ${lang[key]}`);
}

const arr = ["py","js","c++","ruby"]

for (const key in arr) {
    //console.log(key,arr[key]);
}

// for each loop
const companies = ["ey","jpmc","amazon","goldman sachs","google","walmart"]
companies.forEach(function(val){
  //  console.log(val);
})

//using arrow function 
companies.forEach((dream)=>{
  //  console.log(dream);
})

function printme(i){
    console.log(i);
}
//companies.forEach(printme); 

const myCoding = [
    {
        languageName: "javascript",
        languageFileName: "js"
    },
    {
        languageName: "java",
        languageFileName: "java"
    },
    {
        languageName: "python",
        languageFileName: "py"
    },
]

myCoding.forEach((data)=>{
    console.log(data.languageFileName);
})
