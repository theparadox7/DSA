#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int secondlargest(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-2];
}

int main(){
    vector<int>arr = {2,4,6,8};
    int seclargest =secondlargest(arr);
    cout<<seclargest<<endl;
    
}
