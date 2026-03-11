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

ListNode* middleNode(ListNode *head){
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

class List {
    ListNode *head;
    ListNode *tail;
    
public:
    List(){
        head = tail = NULL;
    }

    void push_back(int val){
        ListNode* newNode = new ListNode(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode* gethead(){
        return head;
    }
};


int main(){
    List ll;
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout<< middleNode(ll.gethead())->data<<endl;
    
    return 0;
}