#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* first = head; ListNode* sec = head->next;
    ListNode* prev = NULL;

    while(first != NULL && sec != NULL){
        ListNode* third = sec->next;
        sec->next = first;
        first->next = third;

        prev != NULL ? prev->next = sec : head = sec;

        prev = first;
        first = third;
        third != NULL ? sec = third->next : sec = NULL;
    }
    return head;
}

int main(){

    return 0;
}
