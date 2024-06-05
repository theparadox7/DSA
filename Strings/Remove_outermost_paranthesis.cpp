#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(const string& s) {
        string result;
        int counter = 0;
        for (char c : s) {
            if (c == '(') {
                if (counter > 0) {
                    result += c;
                }
                counter++;
            } else if (c == ')') {
                counter--;
                if (counter > 0) {
                    result += c;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string test1 = "(()())(())";
    string test2 = "(()())(())(()(()))";
    string test3 = "()()";

    cout << "Result for \"" << test1 << "\": " << solution.removeOuterParentheses(test1) << endl;
    cout << "Result for \"" << test2 << "\": " << solution.removeOuterParentheses(test2) << endl;
    cout << "Result for \"" << test3 << "\": " << solution.removeOuterParentheses(test3) << endl;

    return 0;
}
