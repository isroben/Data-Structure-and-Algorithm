#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        Node* next = NULL;
        Node* prev = NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;

    doublyList(){
        head = tail = NULL;
    }
    void push_front(int val){
        if(head == NULL){
            
        }
    }
};