/*
    You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, 
    and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
    You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

#include<bits/stdc++.h>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = new ListNode(0);
        ListNode* tail = head1;
        int carry = 0;

        int digit1,digit2;

        while(l1!=nullptr || l2!=nullptr || carry!=0) {
            if(l1!=nullptr) digit1 = l1->val;
            else digit1=0;

            if(l2!=nullptr) digit2 = l2->val;
            else digit2=0;

            int sum = digit1+digit2+carry;
            int digit = sum%10;
            carry = sum/10;

            ListNode* ansNode = new ListNode(digit);
            tail->next = ansNode;
            tail = tail->next;

            if(l1!=nullptr) l1=l1->next;
            else l1=nullptr;

            if(l2!=nullptr) l2=l2->next;
            else l2=nullptr;
        }
        ListNode* result = head1->next;
        delete head1;
        return result;
    }
};