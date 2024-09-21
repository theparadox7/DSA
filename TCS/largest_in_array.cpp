#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int largestarr(vector<int>& a) {
    int largest = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i]>largest)
        largest = a[i];
    }
    return largest;
        cout<<largest;
    
    return a[0];
}

int main(){
    vector<int>arr = {2,4,6,8};
    int largest =largestarr(arr);
    cout<<largest<<endl;
    
}

