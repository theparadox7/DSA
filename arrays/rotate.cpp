#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
int arr[n];
int i;
for(i=0;i<n;i++){
    cin >> arr[i];
}
int k;
int arr2[n];
cin >> k;
cout<<"Rotated array is\n";
for (i=0;i<n;i++){
    arr2[(i+k)% n] = arr[i];
}
for (i=0;i<n;i++){
cout<<arr2[i];
}

}