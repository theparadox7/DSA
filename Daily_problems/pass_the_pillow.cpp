#include <iostream>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int position = 1; // starting at the first person
        int direction = 1; // 1 means forward, -1 means backward

        while (time > 0) {
            position += direction;
            if (position == n) {
                direction = -1; // change direction to backward
            } else if (position == 1) {
                direction = 1; // change direction to forward
            }
            time--;
        }

        return position;
    }
};

int main() {
    Solution solution;
    int n, time;
    cout << "Enter the number of people (n): ";
    cin >> n;
    cout << "Enter the time (in seconds): ";
    cin >> time;

    int result = solution.passThePillow(n, time);
    cout << "The person holding the pillow after " << time << " seconds is at position: " << result << endl;

    return 0;
}
