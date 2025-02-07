const prom_one = new Promise(function(resolve,reject){
    let error = true ; 
    if(!error){
        resolve("we will be transferring the data") ; 
    }
    else{
        reject("we have got an error : ERROR 404") ;
    }
})

async function consumepromise(){
    try {
        const response = await prom_one ;
        console.log(response);
    } catch (error) {
        console.log(error);
    }
}
consumepromise(); 