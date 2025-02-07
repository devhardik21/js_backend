// const parrot = document.getElementById('parrot') ; 
// parrot.addEventListener('click',function(e){
//     console.log("parrot just got clicked"); 
//     // console.log(e);
//     // console.log(e.target);
//    // alert("the photo of parrot got clicked"); 
// }) ; 
// document.querySelector('#images').addEventListener('click',function(e){
//        console.log("ul just got clicked"); 
//         // console.log(e.target);
//         // console.log(e.target.parentNode);
// },true) ; 
// document.querySelector('#images').addEventListener('click',function(e){
//     let parent = e.target.parentNode ; 
//     console.log(parent);
//     parent.remove() ;
// } ) 

//ab wo spotify me click kr rhe toh pura delete ho jara hai..

document.querySelector('#images').addEventListener('click',function(e){
  if(e.target.tagName ==='IMG'){
        let par = e.target.parentNode ;
        par.remove();
  }
  else{
        e.preventDefault() ; 
        e.target.remove() ; 
  }
} ) 


