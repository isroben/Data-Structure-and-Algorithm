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

    void push_front(int val){
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
    
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    cout<< middleNode(ll.gethead())->data<<endl;
    
    return 0;
}