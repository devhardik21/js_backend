const obj = {
    u_name : "hardik shandilya",
    rno : 18,
    place : "durg"
}

const det = Object.getOwnPropertyDescriptor(obj,"u_name"); 
console.log(det);
Object.defineProperty(obj,"u_name",{
    writable: false 
})

obj.u_name = "deva" ; 
console.log(obj);

console.log(Object.entries(obj));