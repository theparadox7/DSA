#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {
            n = n / 2;
        }
        return n == 1;
    }
};

int main() {
    Solution solution;
    
    int test1 = 1; // Example input
    bool result = solution.isPowerOfTwo(test1);
    cout << test1 << " is " << (result ? "" : "not ") << "a power of two." << endl;
    
    int test2 = 18; // Example input
    result = solution.isPowerOfTwo(test2);
    cout << test2 << " is " << (result ? "" : "not ") << "a power of two." << endl;
    
    return 0;
}
