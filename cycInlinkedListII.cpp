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

class List {
	ListNode* head;
	ListNode* tail;

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
		else{
			tail->next = newNode;
			tail = newNode;
		}
	}
	ListNode* getHead(){
		return head;
	}
};

ListNode* detectCycle(ListNode* head){
	ListNode* slow = head;
	ListNode* fast = head;
	bool isCycle = false;
	
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;

		if(slow == fast){
			isCycle = true;
			break;
		}
	}
	
	if(!isCycle){
		return NULL;
	}

	slow = head;
	while(slow != fast){
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
};

int main(){
	List ll;

	ll.push_back(3);
	ll.push_back(2);
	ll.push_back(0);
	ll.push_back(-4);

	cout<< detectCycle(ll.getHead()->next) <<endl;

	return 0;
}
