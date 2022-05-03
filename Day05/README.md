# Day5

## Reverse Linked List

Link: [https://leetcode.com/problems/reverse-linked-list/]

- Initialize three pointers, prev and temp as null and curr as head.
- While the curr is not null, do: 
  - Assign next of curr to temp.
  - Assign prev to next of curr.
  - Assign curr to prev
  - Assign temp to curr
- Return prev

Time Complexity: O(n)

## Middle of the Linked List

Link: [https://leetcode.com/problems/middle-of-the-linked-list/]

- Use two pointers slow and fast.
```
slow = slow -> next
fast = fast -> next -> next
```
- Run the while while both fast and fast -> next are valid.
- Return the slow pointer.

Time Complexity: O(n)

## Delete Node in a Linked List

Link: [https://leetcode.com/problems/delete-node-in-a-linked-list/]

- Change the given node's value to the value of the next node.
- Change the next address of node to next -> next.
```
node -> next = node -> next -> next
```

Time Complexity: O(1)

## Remove Nth Node From End of List

Link: [https://leetcode.com/problems/remove-nth-node-from-end-of-list/]

- Create a new dummy node start.
- Put the head node in start -> next
- Run a fast pointer for n times.
- Run a slow and fast pointers while fast is not null.
- Delete the node by marking 
```
slow -> next = slow -> next -> next
```
- Return start -> next

Time Complexity: O(n)

## Add Two Numbers (Linked List)

Link: [https://leetcode.com/problems/add-two-numbers/]

- Create a dummy node and a temp node pointing to dummy node.
- Initialize a carry variable.
- Run a while loop while either:
  - l1 is not empty.
  - l2 is not empty.
  - Carry is not zero.
- If l1 is not null, add it's value to sum.
- If l2 is not null, add it's value to sum.
- If carry is not zero, add it's value to sum.
- Set the carry as sum / 10.
- Create a new node with sum % 10 as the value.
- Append the new node to the next of temp pointer.
- Return start -> next as the result.

Time Complexity: O(max(n, m))

## Merge two sorted Linked Lists

Link: [https://leetcode.com/problems/merge-two-sorted-lists/]

## Merge Two Sorted Lists

Link: [https://leetcode.com/problems/merge-two-sorted-lists/]

- Create a dummy node ans and a curr pointer to ans.
- Run a while loop while both list1 and list are not null
- Compare the current element of the two lists and append the smaller one to the curr pointer.
- At the end of the loop, if there are elements present in either list, append the whole list to the curr pointer.
- Return ans -> next as the result.
