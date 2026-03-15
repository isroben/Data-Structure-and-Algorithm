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
    void insertTail(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = tail = NULL;
            tail->next = head;
        }
        else{
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    void deleteHead(){
        if(head == NULL){
            return;
        }
        else if(head == tail){
            delete head;
        }
        else{
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }
    void deleteTail(){
        if(head == NULL){
            return;
        }
        else if(head == tail){
            delete tail;
        }
        else{
            Node* temp = tail;
            Node* prev = head;

            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
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
    
    ll.insertTail(2);
    ll.insertTail(5);
    ll.insertTail(7);
    ll.print();

    ll.deleteHead();
    ll.print();

    ll.deleteTail();
    ll.print();


    return 0;
}