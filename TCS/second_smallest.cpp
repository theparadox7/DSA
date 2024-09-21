#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int secondsmallest(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[1];
}

int main(){
    vector<int>arr = {2,4,6,8};
    int secsmall =secondsmallest(arr);
    cout<<secsmall<<endl;
    
}
