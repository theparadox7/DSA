#include <vector>
#include <iostream>
using namespace std;

bool threeConsecutiveOdds(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == 3)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> test2 = {2, 6, 4, 1, 3, 5};
    vector<int> test1 = {2, 6, 4, 1, 3, 5, 7};
    vector<int> test3 = {1, 6, 5, 8};

    cout << "Test 1: " << (threeConsecutiveOdds(test1) ? "True" : "False") << std::endl;
    cout << "Test 2: " << (threeConsecutiveOdds(test2) ? "True" : "False") << std::endl;
    cout << "Test 3: " << (threeConsecutiveOdds(test3) ? "True" : "False") << std::endl;

    return 0;
}
