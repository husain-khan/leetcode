class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Handle edge cases
        if (!head || !head->next || k == 0) {
            return head;
        }
        
        // Find the length of the list and connect it into a ring
        ListNode* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }
        tail->next = head; // Connect the last node to the head
        
        // Calculate the new tail position
        int newTailIndex = length - k % length - 1;
        
        // Find the new tail and break the ring
        ListNode* newTail = head;
        for (int i = 0; i < newTailIndex; ++i) {
            newTail = newTail->next;
        }
        
        ListNode* newHead = newTail->next;
        newTail->next = nullptr; // Break the ring
        
        return newHead;
    }
};
