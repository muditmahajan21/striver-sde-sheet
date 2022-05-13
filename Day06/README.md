# Day6

## Detect a cycle in Linked List

Link: [https://leetcode.com/problems/linked-list-cycle/]

- Initialize slow and fast pointers to head.
- While fast -> next and fast -> next -> next is not null.
- Run slow = slow -> next and fast = fast -> next -> next.
- If slow is equal to fast, return true.
- Outside the loop, return false.

Time Complexity: O(n).

## Palindrome Linked List

Link: [https://leetcode.com/problems/palindrome-linked-list/]

- If head is null or next of head is null, return true.
- Find the middle of the linked list by using the slow and fast pointer method.
- Create a temp node pointing to next of slow.
- Reverse the list from temp and assign prev to slow -> next.
- Take a dummy node pointing to the head of the linked list and start traversing from the middle as well as the head.
- If any element is not same at the two points, then return false.
- Else, at the end of the ;loop, return true.

Time Complexity: O(n)

## Intersection of Two Linked Lists

Link: [https://leetcode.com/problems/intersection-of-two-linked-lists/]

- Run an infinite loop.
- Run the loop till the traversing nodes of both lists are not equal.
- If one is null, just re-initialize to the head.

Time Complexity: O(2 * max(lenA, lenB))

## Find the starting point of the Loop of LinkedList

Link: [https://leetcode.com/problems/linked-list-cycle-ii/]

- Initialize two pointers slow and fast to head.
- While fast and fast -> next are not null, run the while loop while they are not equal and fast or fast -> next is not null.
- If they become null, return null. Else
- Re-initialize slow to head and run another loop.
- This time, the loop is to be run while slow is not equal to fast.
- When, they become equal, return any one of them.

Time Complexity: O(n)

##  Flattening a Linked List 

Link: [https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1]

### Approach: Merge Sort

- Use recursion for root and root -> next.
- Use a separate merge function to merge the bottom linked lists of root and root -> next.
- In the merge function, create a new temp node and while both are not null, keep adding the elements one by one from the two linked lists.
- If one is not null, add that one at the end,
- Return the new bottom linked list and assign it to root.

Time Complexity: O(n)

## Reverse Nodes in k-Group

Link: [https://leetcode.com/problems/reverse-nodes-in-k-group/]

- Run a loop of i less than k, if the current node is null, return head.
- Run another loop for i less than k and reverse the linked list using temp and prev nodes.
- If the current node is not null, then recurse on head -> next to the current node and k.
- Return the prev node at the end as the answer.

Time Complexity: O(n)
