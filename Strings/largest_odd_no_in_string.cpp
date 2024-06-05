#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size() - 1;
        while (i >= 0 && (num[i] - '0') % 2 == 0) {
            i--;
        }
        if (i >= 0) {
            return num.substr(0, i + 1);
        } else {
            return "";
        }
    }
};

int main() {
    Solution solution;
    string test1 = "52";
    string test2 = "4206";
    string test3 = "35427";

    cout << "Result for \"" << test1 << "\": " << solution.largestOddNumber(test1) << endl;
    cout << "Result for \"" << test2 << "\": " << solution.largestOddNumber(test2) << endl;
    cout << "Result for \"" << test3 << "\": " << solution.largestOddNumber(test3) << endl;

    return 0;
}
