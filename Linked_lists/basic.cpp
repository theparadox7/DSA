#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int>a = {0,1,2,3,4,3};
    Node y = Node(a[0],nullptr);
    cout<<y.data<<endl;
    cout<<y.next;
    return 0;
}