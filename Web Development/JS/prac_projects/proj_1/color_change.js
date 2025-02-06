const colorSelector = document.querySelectorAll('.class') ; 
const body = document.querySelector('body') ; 

colorSelector.forEach(function(color){
//console.log(color);
color.addEventListener('click',function(e){
    console.log(e);
    console.log(e.target);
    if(e.target.id==='orange'){
        body.style.backgroundColor = 'orange' ;
    }
    if(e.target.id==='pink'){
        body.style.backgroundColor = 'pink' ;
    }
    if(e.target.id==='red'){
        body.style.backgroundColor = 'red' ;
    }
    if(e.target.id==='brown'){
        body.style.backgroundColor = 'brown' ;
    }
})
})