class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head; // If list is empty or has only one node, return as is
        }
        
        ListNode* dummy = new ListNode(0); // Create a dummy node
        dummy->next = head;
        ListNode* prev = dummy; // Previous node in the pair
        
        while (prev->next && prev->next->next) {
            ListNode* first = prev->next; // First node in the pair
            ListNode* second = prev->next->next; // Second node in the pair
            
            // Swap the nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;
            
            // Move to the next pair
            prev = first;
        }
        
        ListNode* newHead = dummy->next; // New head after swapping
        delete dummy; // Clean up dummy node
        
        return newHead;
    }
};
