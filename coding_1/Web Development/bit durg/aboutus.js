// Dark Mode Toggle
const themeToggle = document.getElementById('theme-toggle');

themeToggle.addEventListener('change', function() {
    document.body.classList.toggle('dark-mode');
});