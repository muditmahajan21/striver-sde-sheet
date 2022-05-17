ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head -> next or !k) return head;
        
        ListNode* curr = head;
        int n = 0;
        while(curr -> next) {
            curr = curr -> next;
            n++;
        }
        n++;
        curr -> next = head;
        
        k %= n;
        
        int end = n - k;
        
        while(end--) curr = curr -> next;
        
        head = curr -> next;
        curr -> next = nullptr;
        
        return head;
    }