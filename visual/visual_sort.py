import time
import random
import matplotlib.pyplot as plt
import os

# Initialize the size with the total numbers to sort
numbers = []
size = 200

# Function for swapping two numbers
def swap(xp, yp):
    return yp, xp

# Save frame function
def save_frame(numbers, step, algorithm):
    fig, ax = plt.subplots()
    ax.bar(range(len(numbers)), numbers)
    plt.title(f"{algorithm}")  # Removed step number from title
    plt.xlabel('Index')
    plt.ylabel('Value')

    # Save frame
    filename = f"static/frames/{algorithm}_step_{step}.png"
    plt.savefig(filename)
    plt.close(fig)
    print(f"Saved frame: {filename}")  # Debug print

# Selection sort function
def selsort(numbers):
    size = len(numbers)
    for i in range(size):
        min_idx = i
        for j in range(i + 1, size):
            if numbers[j] < numbers[min_idx]:
                min_idx = j
        numbers[min_idx], numbers[i] = swap(numbers[min_idx], numbers[i])
        save_frame(numbers, i, 'Selection Sort')

# Driver program
def main():
    # Initializing the array
    for i in range(1, size + 1):
        numbers.append(i)

    # Shuffle the array to make it random
    random.seed(time.time())
    random.shuffle(numbers)

    # Create directory for frames if it does not exist
    os.makedirs('static/frames', exist_ok=True)

    # Call sort
    selsort(numbers)

if __name__ == "__main__":
    main()
