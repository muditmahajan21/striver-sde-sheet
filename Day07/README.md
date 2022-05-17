# Day7

## 3Sum

Link: [https://leetcode.com/problems/3sum/]

### Approach: Binary Search + Sorting the array.

- Sort the array.
- For every element of the array, do a binary search on the rest of the array.
- Set a variable target to zero.
- Take care of duplicate by continuing over them in the starting.
- Check for the low - high condition.
- If target is met, then add the three elements to the answer vector.
- While the low - high condition is met, check if their are duplicated around them and increment or decrement accordingly.

Time Complexity: O(nlogn)

## Trapping Rain Water

Link: [https://leetcode.com/problems/trapping-rain-water/]

- Create two different arrays left and right.
- Store the prefix max value in the left array.
- Store the suffix max value in the right array.
- Run another loop on the array, find the minimum of the prefix and suffix max values.
- Add the difference of the above value found and the height of the current index to the answer variable.

Time Complexity: O(n)

## Remove Duplicates from Sorted Array

Link: [https://leetcode.com/problems/remove-duplicates-from-sorted-array/]

- Take two pointers both initialized to zero.
- Run a for loop on i and a while loop inside in it.
- The condition of while loop is while i is less than n - 1 and the consecutive elements are equal.
- Increment i for the above while condition.
- Assign the element at i to the j-th index and increment j.
- Return j as the length of the answer array.

Time Complexity: O(n)

## Max Consecutive Ones

Link: [https://leetcode.com/problems/max-consecutive-ones/]

- Take a temp variable and an answer variable, initialized to zero.
- Run a for loop on the array.
- If 1, increment temp by 1 else make temp 0.
- Check for the maximum value of temp at every loop iteration.
- Return answer (max temp at any time).

Time Complexity: O(n)

## Copy List with Random Pointer

Link: [https://leetcode.com/problems/copy-list-with-random-pointer/]

- Add the copy nodes in the original linked list nodes ahead of the original one as below: 
```
A -> A' -> B -> B' -> ... -> N -> N'
```
- To mark the random pointers, traverse the linked list and assign the random pointer accordingly to the previous original nodes.
- Again traverse the linked list and get the new nodes in a linked list attached to a dummy node.
- Parallely, disconnect the old nodes and return the dummy head of the new linked list.

Time Complexity: O(n)

## Rotate List

Link: [https://leetcode.com/problems/rotate-list/]

- Find the length of the linked list and a pointer to the last node of the linked list.
- Make the linked list circular by making the next of the last node point to the head.
- If k is greater than n(length of linked list), find k by k = k % n.
- Find the ending point of the linked list by end = n - k.
- Run the pointer at the end of the linked list for end.
- Make the node present at the next of the pointer as head.
- Disconnect the circular linked list by makign the next of the pointer node as null.
- Return the new head.

Time Complexity: O(n)