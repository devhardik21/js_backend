// JS for mode toggle
const modeToggle = document.getElementById('mode-toggle');
const body = document.body;
const modeText = document.getElementById('mode-text');

modeToggle.addEventListener('change', () => {
    body.classList.toggle('dark-mode');
    if (body.classList.contains('dark-mode')) {
        modeText.textContent = 'Dark Mode';
    } else {
        modeText.textContent = 'Light Mode';
    }
});

// Interactivity for dropdowns (already handled by CSS, but you can add further JS as needed for animations)