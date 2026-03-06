#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;

    }
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic
        // Node* newNode(val); // static

        if(head == NULL){
            head = tail = newNode;
        }
    }
};

int main(){
    List ll;

    return 0;
}