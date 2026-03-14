#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList(){
        head = tail = NULL;
    }
    void insertHead(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = newNode;
        }
        else{
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }
    void print(){
        if(tail == NULL){
            return;
        }
        cout<< head->data <<"->";
        Node* temp = head->next;

        while(temp != head){
            cout<< temp->data << "->";
            temp = temp->next;
        }
        cout<< temp->data <<endl;
    }
};

int main(){
    CircularList ll;

    ll.insertHead(6);
    ll.insertHead(1);
    ll.insertHead(9);

    ll.print();
    return 0;
}