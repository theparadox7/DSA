#include <algorithm>
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

int minDifference(vector<int>& nums)
{
    int n = nums.size(),i=0;
        if(n<=4)
        return 0;
        sort(nums.begin(),nums.end());
        int min_diff =INT_MAX;
        for(i = 0 ; i <= 3; i++){
            min_diff = min(min_diff, nums[n - 4 + i] - nums[i]);
        }
        return min_diff;
}

int main() {
    vector<int> nums = {3, 8, 15, 17};
    cout << "Minimum difference: " << minDifference(nums) << endl;
    return 0;
}
