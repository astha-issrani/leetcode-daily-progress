#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int data1, ListNode* next1){
        data=data1;
        next=next1;
    }
    ListNode(int data1){
        data=data1;
        next=nullptr;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* temp=head;
        ListNode* front;
        while(temp!=nullptr){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};