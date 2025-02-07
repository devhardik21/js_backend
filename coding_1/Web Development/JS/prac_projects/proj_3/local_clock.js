const clock_ind = document.querySelector('#clock_ind') ; 
const clock_usa = document.querySelector('#clock_usa') ; 

setInterval(function(){
    const date = new Date();
   // console.log(date.toLocaleTimeString());
   clock_ind.innerHTML = date.toLocaleTimeString();
   const options = { timeZone: "America/New_York", timeStyle: "medium", hour12: true};
   const usaTime = new Intl.DateTimeFormat("en-US", options).format(date);
   clock_usa.innerHTML = usaTime ; 
},1000)