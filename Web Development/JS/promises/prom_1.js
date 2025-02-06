//  <---------------syntax-1 --------------->
const prom_one = new Promise(function(resolve,reject){
    // doing our async task 
    setTimeout(function(){
        console.log("Async task is completed");
        resolve();
    },1000)
})

prom_one.then(function(){
    console.log("promise got consumed");
})


//  <---------------syntax-2--------------->
    new Promise(function(resolve,reject){
    setTimeout(()=>{
        console.log("the async task 2 just got completed");
        resolve() ; 
    },1000)
}).then(()=>(console.log("the promise two just got consumed"))) ; 


// <-----------------syntax-3------------------>

prom_three = new Promise(function(resolve,reject){
    setTimeout(function(){
        resolve({"name":"hardik shandilya","type":"data"}) ;
    },1000)
})

prom_three.then((data)=>{
    console.log(data);
    console.log(data.type);
})

//<-----------------syntax-4----------------------->
prom_four = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = true ; 
        if(!error){
            resolve({"name":"hardik shandilya","type":"data"}) ;
        }
        else{
            reject("here we have got an error dude!!") ; 
        }
    },1000)
}).then(function(data){
    console.log("we got the data :",data);
})
    .catch(function(error){
        console.log(error);
    })
    .finally(()=>console.log("either we got the resolve or the reject"));

