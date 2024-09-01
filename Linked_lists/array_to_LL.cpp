#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;


// Constructor
    public:
    Node(int data1,Node* next1)
    {
        data = data1;
        next = next1;
    }
    
    // You can have multiple cnstructors
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* arrayToLl(vector<int>arr)
{
    Node* Head = new Node(arr[0]);
    Node* Mover = Head;
    for(int i =1;i<arr.size();i++)
    {
        Node* Temp = new Node(arr[i]);
        Mover ->next = Temp;
        Mover = Temp;
    }
    return Head;
}

int main()
{
    vector<int>a = {0,1,2,3,4,3};
    
    return 0;



}