#include <iostream>

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        } else {
            return 1 + (num - 1) % 9;
        }
    }
};

int main() {
    Solution solution;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = solution.addDigits(num);
    std::cout << "The result is: " << result << std::endl;

    return 0;
}
