from flask import Flask, render_template, request, jsonify
import os
import subprocess
import re

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/sort', methods=['POST'])
def sort():
    algorithm = request.form.get('algorithm', 'Selection Sort')
    size = int(request.form.get('size', 200))
    
    # Check if frames are already generated
    frame_dir = 'static/frames'
    if not os.listdir(frame_dir):
        # Generate frames only if they are not present
        result = subprocess.run(['python', 'visual_sort.py'], capture_output=True, text=True)
        if result.returncode != 0:
            return jsonify({'error': 'Error running visual_sort.py', 'details': result.stderr}), 500

    # Get the list of frames
    frames = []
    if os.path.exists(frame_dir):
        # List files and sort them numerically
        frame_files = [f for f in os.listdir(frame_dir) if f.startswith(f'{algorithm}_step_') and f.endswith('.png')]
        frame_files.sort(key=lambda f: int(re.search(r'_(\d+)\.png$', f).group(1)))
        
        for filename in frame_files:
            frames.append(f'/static/frames/{filename}')
    else:
        return jsonify({'error': 'Frames directory does not exist'}), 500
    
    return jsonify({'frames': frames})

if __name__ == '__main__':
    app.run(debug=True)
