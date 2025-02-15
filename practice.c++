
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify merging
        ListNode dummy(0);
        ListNode* current = &dummy; // Pointer to build the new list

        // Iterate through both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                current->next = list1; 

                
                list1 = list1->next; 
                
            } else {
                current->next = list2; 


                 
                list2 = list2->next;
            }
            current = current->next; 
        }

        // If there are remaining nodes in either list, append them
        if (list1 != nullptr) {
            current->next = list1;
        } else if (list2 != nullptr) {
            current->next = list2;
        }

        return dummy.next; // Return the head of the merged list
        //lxcmw
    }
};
// //addingo for comment 
// #include <iostream>

// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if (n <= 0) return false;
//         if ((n & (n - 1)) != 0) return false; // Not a power of two

//         return (n & 0x55555555) == n; // Check if set bit is at even position
//     }
// };
