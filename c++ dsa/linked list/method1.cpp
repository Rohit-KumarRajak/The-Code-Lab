#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node first;
    Node second;
    Node third;
    first.data=10;
    second.data=20;
    third.data=30;
    first.next=&second;
    second.next=&third;
    third.next=nullptr;
}