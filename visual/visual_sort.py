import time
import random
import matplotlib.pyplot as plt

# Initialize the size with the total numbers to sorted
# and the gap to be maintained in graph
numbers = []
size = 200
gap = 4

# Function for swapping two numbers
def swap(xp, yp):
    return yp, xp

# Selection sort function
def selsort(numbers):
    for i in range(size - 1):

        # Find the minimum element in unsorted array
        min_idx = i

        for j in range(i + 1, size):
            if numbers[j] < numbers[min_idx]:
                min_idx = j

        # Swap the found minimum element with the first element
        numbers[min_idx], numbers[i] = swap(numbers[min_idx], numbers[i])

        # Function to show transition in swapping
        plt.bar([i for i in range(len(numbers))], numbers)
        plt.show(block=False)
        plt.pause(0.1)
        plt.clf()

# Driver program
def main():

    # Initializing the array
    for i in range(1, size + 1):
        numbers.append(i)

    # Find a seed and shuffle the array to make it random.
    # Here different type of array can be taken to results
    # such as nearly sorted, already sorted, reverse sorted to visualize the result
    random.seed(time.time())
    random.shuffle(numbers)

    # Initial plot of numbers in graph taking
    # the vector position as x-axis and its
    # corresponding value will be the height of line.
    plt.bar([i for i in range(len(numbers))], numbers)
    plt.show(block=False)
    plt.pause(0.1)
    plt.clf()

    # Call sort
    selsort(numbers)

    for i in range(size):
        print(numbers[i], end=" ")
    print()

    # Wait for sometime
    time.sleep(5)

if __name__ == "__main__":
    main()
