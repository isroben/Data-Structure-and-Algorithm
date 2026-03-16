#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* reverseKGroup(ListNode* head, int k){
    ListNode* temp = head;
    int count = 0;

    while(count < k){
        if(temp == NULL) return head;
        temp = temp->next;
        count++;
    }

    ListNode* nextNode = reverseKGroup(temp, k);

    temp = head; count = 0;
    while(count < k){
        ListNode* subsequent = temp->next;
        temp->next = nextNode;
        nextNode = temp;
        temp = subsequent;
        count++;
    }
    return nextNode;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for(int i=1; i<arr.size(); i++){
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

}