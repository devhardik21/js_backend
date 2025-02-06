function setUsername(username){
    this.username = username ;
    console.log("is this function getting called?? yeah it is !");
}

function data(username, salary , place){
    setUsername.call(this,username);
    this.salary = salary ; 
    this.place = place ; 
}

const user_one = new data("hardik",100000,"san diego") ; 
console.log(user_one);