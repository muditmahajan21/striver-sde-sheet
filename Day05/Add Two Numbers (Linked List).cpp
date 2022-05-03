ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start = new ListNode();
        ListNode* temp = start;
        int carry = 0;
        
        while(l1 or l2 or carry) {
            int sum = 0;
            if(l1) {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2) {
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            temp -> next = node;
            temp = temp -> next;
        }
        
        return start -> next;
    }