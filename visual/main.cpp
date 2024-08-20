#include <GL/glut.h>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>
#include <random>
#include <iostream>
#include <cstring>

// Initialize the size
const int SIZE = 200;
const int GAP =8;
std::vector<int> numbers(SIZE);

// Initialize window dimensions
const int WIDTH = GAP * SIZE;
const int HEIGHT = SIZE;

// Sorting algorithm choice
enum Algorithm {
    SELECTION_SORT,
    BUBBLE_SORT
};

Algorithm current_algorithm = SELECTION_SORT;

// Function to swap elements
void swap_elements(int i, int j) {
    std::swap(numbers[i], numbers[j]);
}

// Function to draw a bar
void draw_bar(int x, int height, float r, float g, float b) {
    glBegin(GL_QUADS);
    glColor3f(r, g, b);
    glVertex2f(x, 0);
    glVertex2f(x + GAP, 0);
    glVertex2f(x + GAP, height);
    glVertex2f(x, height);
    glEnd();
}

// Function to draw the array
void draw_array() {
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i < SIZE; ++i) {
        int x = i * GAP;
        draw_bar(x, numbers[i], 1.0f, 1.0f, 1.0f); // White bars
    }
    glutSwapBuffers();
}

// Selection Sort function with visualization
void selection_sort() {
    for (int i = 0; i < SIZE - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < SIZE; ++j) {
            if (numbers[j] < numbers[min_idx]) {
                min_idx = j;
            }
        }
        swap_elements(i, min_idx);

        // Visualize the swap
        glClear(GL_COLOR_BUFFER_BIT);
        for (int k = 0; k < SIZE; ++k) {
            int x = k * GAP;
            if (k == i || k == min_idx) {
                draw_bar(x, numbers[k], 0.0f, 1.0f, 0.0f); // Green for swapped elements
            } else {
                draw_bar(x, numbers[k], 1.0f, 1.0f, 1.0f); // White for others
            }
        }
        glutSwapBuffers();
        glutPostRedisplay(); // Request a redraw
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Reduced delay for faster visualization
    }
}

// Bubble Sort function with visualization
void bubble_sort() {
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                swap_elements(j, j + 1);
                
                // Visualize the swap
                glClear(GL_COLOR_BUFFER_BIT);
                for (int k = 0; k < SIZE; ++k) {
                    int x = k * GAP;
                    if (k == j || k == j + 1) {
                        draw_bar(x, numbers[k], 1.0f, 0.0f, 0.0f); // Red for swapped elements
                    } else {
                        draw_bar(x, numbers[k], 1.0f, 1.0f, 1.0f); // White for others
                    }
                }
                glutSwapBuffers();
                glutPostRedisplay(); // Request a redraw
                std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Reduced delay for faster visualization
            }
        }
    }
}

// Display callback function
void display() {
    draw_array();
    if (current_algorithm == SELECTION_SORT) {
        selection_sort();
    } else if (current_algorithm == BUBBLE_SORT) {
        bubble_sort();
    }
}

// Initialization callback
void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    glOrtho(0.0, WIDTH, 0.0, HEIGHT, -1.0, 1.0); // Set up orthographic projection
}

// Function to set the sorting algorithm based on user input
void set_algorithm(const char* algo) {
    if (strcmp(algo, "bubble") == 0) {
        current_algorithm = BUBBLE_SORT;
    } else {
        current_algorithm = SELECTION_SORT;
    }
}

// Main function
int main(int argc, char** argv) {
    // Parse user input for sorting algorithm
    if (argc > 1) {
        set_algorithm(argv[1]);
    }

    // Initialize the array
    for (int i = 1; i <= SIZE; ++i) {
        numbers[i - 1] = i;
    }

    // Shuffle the array
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));

    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Sorting Algorithm Visualization");

    init();
    glutDisplayFunc(display);

    // Start the GLUT main loop
    glutMainLoop();
    return 0;
}
