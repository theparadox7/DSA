from flask import Flask, render_template, request, jsonify
import os
import subprocess  # Use subprocess instead of os.system for better control

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/sort', methods=['POST'])
def sort():
    algorithm = request.form.get('algorithm', 'Selection Sort')
    size = int(request.form.get('size', 200))
    
    # Generate frames
    # Use subprocess.run to execute the script and capture errors
    result = subprocess.run(['python', 'visual_sort.py'], capture_output=True, text=True)
    if result.returncode != 0:
        # Return an error message if the sorting script fails
        return jsonify({'error': 'Error running visual_sort.py', 'details': result.stderr}), 500
    
    # Get the list of frames
    frames = []
    frame_dir = 'static/frames'
    if os.path.exists(frame_dir):
        for filename in sorted(os.listdir(frame_dir)):
            if filename.startswith(f'{algorithm}_step_') and filename.endswith('.png'):
                frames.append(f'/static/frames/{filename}')
    else:
        # Return an error message if the frames directory does not exist
        return jsonify({'error': 'Frames directory does not exist'}), 500
    
    # Return frames as a JSON response
    return jsonify({'frames': frames})

if __name__ == '__main__':
    app.run(debug=True)
