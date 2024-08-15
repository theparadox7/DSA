#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;  // Track number of $5 and $10 bills

        for (int bill : bills) {
            if (bill == 5) {
                five++;  // No change needed, just increase $5 bill count
            } else if (bill == 10) {
                if (five > 0) {
                    five--;  // Give back $5 as change
                    ten++;   // Increase $10 bill count
                } else {
                    return false;  // Can't give change
                }
            } else {  // bill is $20
                if (ten > 0 && five > 0) {
                    ten--;  // Give back $10 as change
                    five--;  // Give back $5 as change
                } else if (five >= 3) {
                    five -= 3;  // Give three $5 bills as change
                } else {
                    return false;  // Can't give change
                }
            }
        }

        return true; 
    }
};


int main() {
    Solution solution;
    vector<int> bills = {5, 5, 5, 10, 20};
    bool result = solution.lemonadeChange(bills);
    return 0;
}
