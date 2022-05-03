ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        
        ListNode* ans = new ListNode();
        ListNode* curr = ans;
        
        while(curr1 and curr2) {
            if(curr1 -> val < curr2 -> val) {
                curr -> next = curr1;
                curr1 = curr1 -> next;
            } else {
                curr -> next = curr2;
                curr2 = curr2 -> next;
            }
            curr = curr -> next;
        }
        
        if(curr1) {
            curr -> next = curr1;
        } 
        if(curr2) {
            curr -> next = curr2;
        }
        
        return ans -> next;
    }
