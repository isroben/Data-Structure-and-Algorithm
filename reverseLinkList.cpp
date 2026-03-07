#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
};

ListNode* reverseList(ListNode *head) {
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    
    return prev;

}

int main() {

    return 0;
}