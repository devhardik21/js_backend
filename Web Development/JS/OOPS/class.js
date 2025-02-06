class data{
    constructor(user , isLoggedIn , password){
        this.user = user ; 
        this.isLoggedIn = isLoggedIn; 
        this.password = password ;
    }
    EncryptPassword(){
        //console.log(this);
        return (`${this.password}.1234xyz`)
    }
}

const hardik = new data("hardik",true,"damnn_itz_hardik") ;
//console.log(hardik);

console.log(hardik.EncryptPassword());