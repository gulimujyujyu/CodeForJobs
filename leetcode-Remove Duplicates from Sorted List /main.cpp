#include <iostream>
using namespace std;

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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *ptr = head, *nptr = NULL;
        while (ptr) {
            if (ptr->next) {
                nptr = ptr->next;
                while (nptr && ptr->val == nptr->val) {
                    ptr->next = nptr->next;
                    delete nptr;
                    nptr = ptr->next;
                }
            }
            ptr = ptr->next;
        }
        return head;
    }
};
