#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* first=new Node;
    Node* second=new Node;
    Node* third=new Node;
    first->data=10;
    first->next=second;
    second->data=20;
    second->next=nullptr;
}