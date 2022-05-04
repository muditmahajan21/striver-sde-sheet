# Day6

## Detect a cycle in Linked List

Link: [https://leetcode.com/problems/linked-list-cycle/]

- Initialize slow and fast pointers to head.
- While fast -> next and fast -> next -> next is not null.
- Run slow = slow -> next and fast = fast -> next -> next.
- If slow is equal to slow, return true.
- Outside the loop, return false.

Time Complexity: O(n).
