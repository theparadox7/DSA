#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> cl(n + 1, -1);
        return climb(n, cl);
    }
    
private:
    int climb(int n, vector<int>& cl) {

        if (n == 1) return 1;
        if (n == 2) return 2;
        if (cl[n] != -1) return cl[n];
        cl[n] = climb(n - 1, cl) + climb(n - 2, cl);
        return cl[n];
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of ways to climb " << n << " steps: " << solution.climbStairs(n) << endl;
    return 0;
}
