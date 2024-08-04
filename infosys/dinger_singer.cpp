#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to count numbers with a specific zinger value
int countNumbersWithZinger(int N, int M) {
    int flag = 0;
    int lowerBound = pow(10, N - 1);
    int upperBound = pow(10, N) - 1;

    for (int i = lowerBound; i <= upperBound; i++) {
        vector<int> digits;
        int num = i;

        // Extract digits of the number
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        int maxDinger = 0;

        // Calculate the dinger for each digit
        for (int j = 0; j < digits.size(); j++) {
            int dinger = 0;
            for (int k = 0; k < digits.size(); k++) {
                if (j != k) {
                    dinger += abs(digits[j] - digits[k]);
                }
            }
            // Update maxDinger
            maxDinger = max(maxDinger, dinger);
        }

        // Check if the zinger equals M
        if (maxDinger == M) {
            flag++;
        }
    }

    return flag;
}

int main() {
    int N, M;
    
    // Input the length of the number and the desired zinger value
    cout << "Enter the length of the number (N): ";
    cin >> N;
    cout << "Enter the desired zinger value (M): ";
    cin >> M;

    // Call the function and display the result
    int result = countNumbersWithZinger(N, M);
    cout << "Number of integers with zinger " << M << ": " << result << endl;

    return 0;
}
