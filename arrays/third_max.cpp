#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> x(nums.begin(), nums.end());

        vector<int> y(x.begin(), x.end());

        sort(y.begin(), y.end(), greater<int>());

        if (y.size() < 3) {
            return y[0];
        }
        return y[2];
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 1}; // Example input
    int result = solution.thirdMax(nums);
    cout << "The third maximum number is: " << result << endl;
    
    return 0;
}
