ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        bool flag = false;
        
        while(fast and fast -> next and fast -> next -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) {
                flag = true;
                break;
            }
        }
        
        if(!flag) {
            return nullptr;
        }
        
        slow = head;
        
        while(slow != fast) {
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;
    }
