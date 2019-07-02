/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int sum = 0;
        ListNode* dummyHead = new ListNode(0);
        ListNode* curry = dummyHead;
        while (l1 || l2) {
            sum += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            curry->next = new ListNode(sum % 10);
            sum /= 10;
            curry = curry->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if (sum) {
            curry->next = new ListNode(sum);
        }
        return dummyHead->next;
    }
};
