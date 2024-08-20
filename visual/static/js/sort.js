document.getElementById('sortForm').addEventListener('submit', function(event) {
    event.preventDefault();
    
    const formData = new FormData(this);
    
    fetch('/sort', {
        method: 'POST',
        body: formData
    })
    .then(response => response.json())
    .then(data => {
        const frames = data.frames;
        let index = 0;
        const resultDiv = document.getElementById('result');

        function showNextFrame() {
            if (index < frames.length) {
                const img = document.createElement('img');
                img.src = frames[index];
                resultDiv.innerHTML = ''; // Clear previous image
                resultDiv.appendChild(img);
                index++;
                setTimeout(showNextFrame, 100); // Adjust the delay for frame rate
            }
        }

        showNextFrame();
    });
});
