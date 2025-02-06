// inheritence in js
const user = {
    name : "hardik shandilya" 
}

const teacher =  { 
    teacher_name : "hitesh chaudhary" 
}

const course_name = {
    lang : "javascript" ,
    __proto__ : teacher ,
    greet : function(){
        console.log(`hello welcome to the course of ${this.lang} and your teacher is ${this.teacher_name}`);
    }
}

console.log(course_name.teacher_name);
console.log(course_name.greet());

Object.setPrototypeOf(teacher,user) ; 
// teacher me user kaaa
console.log(teacher.name);
