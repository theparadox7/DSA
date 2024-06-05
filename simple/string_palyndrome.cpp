#include <cctype>
#include <string>
#include <iostream>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int n = s.size();
        int right = n - 1;
        while (left < right) {
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    std::string test1 = "A man, a plan, a canal: Panama";
    std::string test2 = "race a car";

    std::cout << (solution.isPalindrome(test1) ? "True" : "False") << std::endl; // Expected output: True
    std::cout << (solution.isPalindrome(test2) ? "True" : "False") << std::endl; // Expected output: False

    return 0;
}
