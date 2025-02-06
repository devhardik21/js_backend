const form = document.querySelector('form') ; 
form.addEventListener('submit',function(e){
e.preventDefault() ; 
const height = parseInt(form.querySelector('#height').value); 
const weight = parseInt(form.querySelector('#weight').value);
const res = form.querySelector('#result') ;
if(height<0 || height==0 || isNaN(height)){
        res.innerHTML = "invalid height" ;
} 
else if(weight<0 || weight==0 || isNaN(weight)){
        res.innerHTML ="invalid weight"; 
} 
else{
    const bmi =(weight / ((height * height) / 10000)).toFixed(2);
        res.innerHTML = `your bmi is ${bmi}` ; 
}
})