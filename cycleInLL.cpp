#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }
};

class List{
    ListNode* head;
    ListNode* tail;

public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        ListNode* newNode = new ListNode(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
    }
}