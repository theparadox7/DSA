/* There are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle.

The operation of drinking a full water bottle turns it into an empty bottle.

Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.*/



#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles; // Initialize the total number of bottles drunk
        int emptyBottles = numBottles; // Initialize the number of empty bottles

        // Continue exchanging while there are enough empty bottles
        while (emptyBottles >= numExchange) {
            int newFullBottles = emptyBottles / numExchange; // Calculate the number of new full bottles from exchanges
            totalDrunk += newFullBottles; // Add the new full bottles to the total count of bottles drunk
            emptyBottles = emptyBottles % numExchange + newFullBottles; // Update the number of empty bottles
        }

        return totalDrunk; // Return the total number of bottles drunk
    }
};

int main() {
    Solution solution;
    int numBottles = 15;
    int numExchange = 4;
    int result = solution.numWaterBottles(numBottles, numExchange);
    cout << "Maximum number of water bottles you can drink: " << result << endl;
    return 0;
}
