#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int reversedHalf = 0;
        while (x > reversedHalf) {
            int rem = x % 10;
            reversedHalf = reversedHalf * 10 + rem;
            x = x / 10;
        }
        return x == reversedHalf || x == reversedHalf / 10;
    }
};

int main() {
    Solution solution;
    int testNumbers[] = {121, -121, 10, 12321, 0};
    for (int num : testNumbers) {
        bool result = solution.isPalindrome(num);
        std::cout << "Is " << num << " a palindrome? " << (result ? "Yes" : "No") << std::endl;
    }
    return 0;
}
