Node *merge(Node* rootA, Node* rootB) {
    Node* temp = new Node(0);
    Node* ans = temp;
    
    while(rootA and rootB) {
        if(rootA -> data < rootB -> data) {
            temp -> bottom = rootA;
            rootA = rootA -> bottom;
        } else {
            temp -> bottom = rootB;
            rootB = rootB -> bottom;
        }
        temp = temp -> bottom;
    }
    
    if(rootA) {
        temp -> bottom = rootA;
    } 
    if(rootB) {
        temp -> bottom = rootB;
    }
    
    return ans -> bottom;
}

Node *flatten(Node *root)
{
   // Your code here
   if(!root or !root -> next) {
       return root;
   }
   
   root -> next = flatten(root -> next);
   
   root = merge(root, root -> next);
   
   return root;
}