#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev =  NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;
public:
    doublyList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->prev = head;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<< "List is empty" <<endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
        
        return;
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data <<endl;
            temp = temp->next;
        }
        return;
    }
};

int main(){
    doublyList ll;

    ll.push_front(2);
    ll.push_front(5);
    ll.push_front(8);

    // ll.print();

    ll.push_back(9);
    ll.push_back(3);
    ll.push_back(1);
    ll.pop_front();
    ll.pop_back();


    ll.print();

    return 0;
}