ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        for(int i = 0; i < k; i++) {
            if(!curr) {
                return head;
            } 
            curr = curr -> next;
        }
        
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        curr = head;
        
        for(int i = 0; i < k; i++) {
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        
        if(curr) {
            head -> next = reverseKGroup(curr, k);
        }
        return prev;
    }
