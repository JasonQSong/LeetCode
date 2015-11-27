#include<iostream>
using namespace std;
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2,*sum,*p;
        sum = p = new ListNode(0);
        while (p1->next != NULL || p2->next != NULL) {
            p->next = new ListNode(p1->val + p2->val);
        }

    }
};