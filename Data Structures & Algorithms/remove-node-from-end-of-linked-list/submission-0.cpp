/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *second = head;

        while (n > 0 && second != nullptr) {
            second = second->next;
            n--;
        }

        // n is greater than length (not needed for LeetCode, but safe)
        if (n > 0)
            return head;

        // Remove first node
        if (second == nullptr) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode *first = head;
        ListNode *prev = nullptr;

        while (second != nullptr) {
            prev = first;
            first = first->next;
            second = second->next;
        }

        prev->next = first->next;
        delete first;

        return head;
    }
};
