#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
using namespace std;
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        if(n==0){

        }
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if (fast == NULL)
        return head->next;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delnode=slow->next;
        slow->next=slow->next->next;
        delete delnode;
        return head;
    }
};