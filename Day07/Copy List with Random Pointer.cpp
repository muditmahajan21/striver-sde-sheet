Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        Node* dummy = new Node(0);
        Node* curr = head;
        
        while(curr) {
            Node* temp = new Node(curr -> val);
            temp -> next = curr -> next;
            curr -> next = temp;
            curr = curr -> next -> next;
        }
        
        curr = head;
        
        while(curr) {
            curr -> next -> random = curr -> random ? curr -> random -> next : curr -> random;
            curr = curr -> next -> next;
        }
        
        Node* temp = dummy;
        curr = head;
        
        while(curr) {
            temp -> next = curr -> next;
            temp = temp -> next;
            
            curr -> next = curr -> next -> next;
            curr = curr -> next;
        }
        
        return dummy -> next;
    }
