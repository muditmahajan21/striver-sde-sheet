ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        
        while(true) {
            if(currA == currB) {
                return currA;
            } else if (!currA) {
                currA = headA;
            } else if (!currB) {
                currB = headB;
            } else {
                currA = currA -> next;
                currB = currB -> next;
            }
        }
    }
