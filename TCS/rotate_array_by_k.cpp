#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int k, int n)
{
    vector<int> temp(n);
    vector<int> temp1(n);


    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];   //right

    for (int i = 0; i < n; i++)
        temp1[(i+(n-k))%n] = arr[i];  //left
    

    cout<<"right rotation"<<endl;
    for (int j = 0; j < n; j++)
    {
        cout << temp[j] << " ";
    }
    cout<<endl;

    cout<<"Left rotation"<<endl;
    for (int j = 0; j < n; j++)
    {
        cout << temp1[j] << " ";
    }
}

int main()
{
    
    int n, k;
    cout << "Enter n value" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter k value";
    cin >> k;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, k, n);
    return 0;
}