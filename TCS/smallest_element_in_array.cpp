#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortarr(vector<int>& a) {
    sort(a.begin(), a.end());
    return a[0];
}

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = sortarr(arr);
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
