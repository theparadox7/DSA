document.getElementById('sortForm').addEventListener('submit', function(event) {
    event.preventDefault();
    
    const formData = new FormData(this);
    
    fetch('/sort', {
        method: 'POST',
        body: formData
    })
    .then(response => response.json())
    .then(data => {
        if (data.error) {
            console.error('Error:', data.error);
            alert('An error occurred: ' + data.error);
            return;
        }

        const frames = data.frames;
        if (frames.length === 0) {
            console.log('No frames found.');
            return;
        }

        let index = 0;
        const resultDiv = document.getElementById('result');

        function showNextFrame() {
            if (index < frames.length) {
                const img = document.createElement('img');
                img.src = frames[index];
                img.onload = function() {
                    console.log('Displaying frame:', frames[index]);
                };
                resultDiv.innerHTML = ''; // Clear previous image
                resultDiv.appendChild(img);
                index++;
                setTimeout(showNextFrame, 24); // Adjust the delay for frame rate
            }
        }

        showNextFrame();
    })
    .catch(error => console.error('Error:', error));
});
