const whole = document.querySelector('.wrapper');
const text_disp = document.querySelector('.text-display');
const inp_dabba = document.querySelector('.input_dabba');
const time_left = document.querySelector('#timeLeft');
const cpm = document.querySelector('#CPM');
const wpm = document.querySelector('#WPM');

function random_paragraph_generator() {
    const paragraphs = [
        "The morning sun peeked over the mountains, casting long shadows and bathing the world in a golden glow. As the birds sang their melodies, the cool breeze whispered through the trees. The air was fresh, filled with the scent of pine and earth, reminding everyone that theres beauty in simplicity. This was the kind of morning that made you appreciate the small moments of life.",

        "In the fast-paced world of technology, it's easy to get lost in the constant flood of information. We are bombarded by notifications, emails, and social media updates, leaving little time for reflection. Yet, amidst the chaos, theres an undeniable need for moments of calm. Finding balance and disconnecting from the digital world can help us regain perspective and reconnect with ourselves and those around us.",

        "Traveling is not just about visiting new places; its about experiencing new ways of life. Every destination offers something unique, whether it's the culture, the food, or the people you meet. It opens our eyes to different perspectives, expanding our horizons. Whether youre exploring a bustling city or a tranquil village, each journey leaves you with memories that stay with you long after youve returned home.",

        "We often spend our days rushing from one task to the next, rarely taking a moment to pause and appreciate what we have. But when we stop to reflect, we realize that the most meaningful moments are not the grand achievements but the quiet, everyday moments we often overlook. A smile from a friend, the sound of laughter, or a beautiful sunset can all hold immense value in our lives.",

        "The importance of protecting our environment cannot be overstated. As the world faces the challenges of climate change, pollution, and deforestation, it is crucial that we take action now. Each small effort, whether it's reducing waste, conserving water, or supporting sustainable practices, contributes to a larger, collective impact. The health of our planet directly affects the well-being of future generations, and we must act responsibly to ensure its preservation.",
        "The power of kindness is often underestimated. A simple gesture, whether it’s holding the door for someone or offering a compliment, can have a lasting impact. Kindness creates a ripple effect, spreading positivity and making the world a little brighter. It’s a reminder that we all have the ability to make someone’s day better with just a small act of compassion.",

        "Health is not just about physical well-being but also about mental and emotional balance. Taking care of our bodies is essential, but nurturing our minds is just as important. Practices like mindfulness, meditation, and spending time in nature can help reduce stress and improve our overall quality of life. Prioritizing mental health ensures we can live with resilience and find joy in everyday moments.",

        "Friendship is one of life’s greatest treasures. True friends support each other through thick and thin, offering comfort during tough times and celebrating successes together. They are the ones who lift you up when you're down and share in your happiness. A strong bond of friendship is built on trust, understanding, and mutual respect, creating a foundation for a lifelong relationship that can withstand any challenge.",

        "In the age of constant connectivity, it’s easy to forget the importance of downtime. We often fill our schedules with work, social media, and commitments, leaving little room for rest. Yet, taking time to relax and recharge is essential for our well-being. Whether it’s enjoying a book, taking a walk, or simply sitting in silence, moments of stillness help us reconnect with ourselves and re-energize for the challenges ahead.",

        "Art has the ability to evoke emotions, spark creativity, and tell powerful stories. Whether it’s through painting, music, or theater, art connects people across cultures and generations. It encourages us to think critically, challenge norms, and express our innermost thoughts. In a world that is constantly changing, art remains a timeless form of self-expression, offering solace, inspiration, and a means to understand the human experience."
    ];
    const random_index = Math.floor(Math.random()*paragraphs.length) ; 

    text_disp.innerHTML = '' ; 
    for (const char of paragraphs[random_index]) {
            console.log(char);
            text_disp.innerHTML += `<span class="span_class">${char}</span>` ; 
    }

    document.querySelectorAll('span')[0].classList.add('active') ;

}
random_paragraph_generator(); 
