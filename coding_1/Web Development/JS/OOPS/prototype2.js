let name = "hardik        " ; 
console.log(name.length);

// creating an method so that we can get the true length of the string

String.prototype.trueLength = function(){
    console.log(`${this}`);
    console.log("true length is :",this.trim().length);
}

name.trueLength() ;
"ritik shandilya           ".trueLength() ; 

const lang = ["cpp","java","python","js"] ; 

Array.prototype.RamRam = function(){
    console.log("Ram Ram bolo bada accha lgta hai");
}

lang.RamRam() ;
