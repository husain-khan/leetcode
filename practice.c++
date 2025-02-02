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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify merging
        ListNode dummy(0);
        ListNode* current = &dummy; // Pointer to build the new list

        // Iterate through both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                current->next = list1; // Append list1 node
                list1 = list1->next; // Move to next node in list1
            } else {
                current->next = list2; // Append list2 node
                list2 = list2->next; // Move to next node in list2
            }
            current = current->next; // Move to next position in merged list
        }

        // If there are remaining nodes in either list, append them
        if (list1 != nullptr) {
            current->next = list1;
        } else if (list2 != nullptr) {
            current->next = list2;
        }

        return dummy.next; // Return the head of the merged list
    }
};
