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

    void pop_front(int val){
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
    
    ll.pop_front(1);
    ll.pop_front(2);
    ll.pop_front(3);
    ll.pop_front(4);
    ll.pop_front(5);

    cout<< middleNode(ll.gethead())->data<<endl;
    
    return 0;
}