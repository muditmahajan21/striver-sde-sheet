bool isPalindrome(ListNode* head) {
        if(!head or !head -> next) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast -> next and fast -> next -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
                
        ListNode* temp = slow -> next;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;
        
        while(temp) {
            nxt = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nxt;
        }
                
        slow -> next = prev;
        slow = slow -> next;
        ListNode* dummy = head;
        
        while(slow) {
            if(dummy -> val != slow -> val) return false;
            dummy = dummy -> next;
            slow = slow -> next;
        }
        
        return true;
    }
