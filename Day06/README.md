# Day6

## Detect a cycle in Linked List

Link: [https://leetcode.com/problems/linked-list-cycle/]

- Initialize slow and fast pointers to head.
- While fast -> next and fast -> next -> next is not null.
- Run slow = slow -> next and fast = fast -> next -> next.
- If slow is equal to slow, return true.
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
