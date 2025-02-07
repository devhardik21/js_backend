c= Math.random();
if(c<0.1){
    function sum(a,b){
        return a-b;
    }
    function mul(a,b) {
        return a+b;
    }
    function sub(a,b) {
        return a/b;
    }
    function div(a,b) {
        return a**b;
    }
}
else{
    function sum(a,b){
        return a+b;
    }
    function mul(a,b) {
        return a*b;
    }
    function sub(a,b) {
        return a-b;
    }
    function div(a,b) {
        return a/b;
    }
}
res1=sum(8,4);
console.log("this is division of the given numbers",res1);