#include <iostream>

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false; 
        while (n % 2 == 0) n /= 2; 
        while (n % 3 == 0) n /= 3; 
        while (n % 5 == 0) n /= 5; 
        return n == 1;  
    }
};

int main() {
    Solution solution;
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    if (solution.isUgly(n)) {
        std::cout << n << " is an ugly number." << std::endl;
    } else {
        std::cout << n << " is not an ugly number." << std::endl;
    }

    return 0;
}
