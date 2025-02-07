let correct_ans = parseInt(Math.random()*100 + 1) ;
console.log(correct_ans);
const submit = document.querySelector('.submit');
const user_input = document.querySelector('#userinput');
const prev_guess = document.querySelector('#prev_guess') ; 
const attemptleft = document.querySelector('#a_left') ;
const ans_print = document.querySelector('.hiorlow') ; 
const start_over = document.querySelector('.result') ; 
let no_of_guesses = 10; 
let playGame = true ; 
let prev_att_arr = [] ; 

const p = document.createElement('p') ;

if(playGame){
    submit.addEventListener('click',function(e){
        e.preventDefault() ; 
        const guess = parseInt(user_input.value) ;
        //console.log(guess);
        no_of_guesses--;
        checkValid(guess) ; 

    })
}
 const checkValid = function(guess){
    if(isNaN(guess)){
        alert("this number is an invalid number") ;
    }
    else if(guess<0){
        alert("this number is an invalid number") ;
    }
    else if(guess>100){
        alert("this number is an invalid number") ;
    }
    else{
        prev_att_arr.push(guess) ; 
        if(no_of_guesses==0){
            ans_print.innerHTML = `SORRY !! the number was ${correct_ans}` ;
            cleanup_code(guess); 
            endGame() ;
        }
        else{
            cleanup_code(guess);
            checkGuess(guess) ;
        }   
    }
 }

 const cleanup_code = function(guess){
    user_input.value = '' ; 
    attemptleft.innerHTML = `${no_of_guesses}`;
    prev_guess.innerHTML += `${guess}  ` ;


 }
// check and display
 const checkGuess = function(guess){
    if(guess==correct_ans){
        DisplayMessage(`Congratulations!! You have won the game`) ;
        endGame() ;
    }
    else if(guess>correct_ans){
        DisplayMessage(`Your guess is TOO BIG`) ;
    }
    else{
        DisplayMessage(`Your guess is TOO SMALL`)
    }
 }

 const DisplayMessage  = function(message){
    ans_print.innerHTML = `<h3>${message}</h3>` ;
 }

 const endGame = function(){
    user_input.value = '' ; 
    user_input.setAttribute('disabled','');
    p.classList.add('button') ;
    p.innerHTML = `<h3 id="newgame"> Click to start NEW GAME </h3> ` ;
    start_over.appendChild(p) ;
    playGame = false ; 
    newGame() ;
    
 }
 const newGame = function(){
    const newG = document.querySelector('#newgame') ;
    newG.addEventListener('click',function(e){
        correct_ans = parseInt(Math.random()*100 + 1) ;
        user_input.removeAttribute('disabled') ;
        prev_att_arr = [] ; 
        no_of_guesses = 10 ; 
        attemptleft.innerHTML = `${no_of_guesses}`;
        prev_guess.innerHTML = '';
        start_over.removeChild(p) ;
        playGame = true ;
        ans_print.innerHTML = '' ;
    })
 } 