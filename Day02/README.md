# Day2

## Rotate Matrix

Link: [https://leetcode.com/problems/rotate-image/]

- Find the transpose of the matrix first. Can be done with following:
```
for(i = 0; i < n; i++) {
  for(j = 0; j < i; j++) {
    swap(matrix[i][j], matrix[j][i])
  }
}
```
- Reverse each row of the matrix and the answer is obtained.

Time Complexity: O(n)

## Merge OverLapping Intervals

Link: [https://leetcode.com/problems/merge-intervals/]

- Sort the intervals on the basis of the starting time.
- If the answer vector is empty, push the entire interval in the answer vector.
- If the current interval's ending time is greater than the answer vector's last interval's ending time, then push the entire inerval in the vector.
- Else, check for the maximum ending time between the current interval and the last interval in the answer vector.

Time Complexity: O(nlogn)

## Find the Duplicate Number

Link: [https://leetcode.com/problems/find-the-duplicate-number]

_Similar to the Find the starting point of cycle in Linked List_

- Initialize slow and fast as the first element of the array.
- Traverse the array with the two pointers, fast travels 2x of the slow.
```
slow = nums[slow]
fast = nums[nums[fast]]
```
- Run the loop till they are similar, that is, fast == slow.
- Re-initialize slow as the first element.
- Re-traverse the array with both slow and fast until they are equal.
- Slow and fast travel at the same speed.

## Merge Sorted Array

Link: [https://leetcode.com/problems/merge-sorted-array/]

- Initialize two pointers i and j pointing to the end of the array and a size k = m + n - 1.
- While i and j are greater than zero, check if the element at i is smaller than the element at j and swap the elements at k and j.
- Else, swap the elements at the position k and i
- While j is greater than zero, swap all the remaining elements with the position k.

Time Complexity: O(n + m)

## Repeat and Missing Number Array

Link: [https://www.interviewbit.com/problems/repeat-and-missing-number-array/]

- Use two mathematical equations of sum of numbers from 1 to n and sum of sqaure of numbers from 1 to n.
- To find the missing number, use the equation:
```
missing = (sum + square_sum/sum) / 2
```
- To find the repeating number, use the equation:
```
repeating = sum - missing
```

Time Complexity: O(n)

Link: [https://www.codingninjas.com/codestudio/problems/count-inversions_615]

- Use merge sort to find the number of inversions.
- Write a logic that counts the number of inversions when the arrays, namely, left sub-array and right sub-array are merged. The idea is to have two indices or pointers. One of the pointers will refer to the left sub-array and the other one will point to the right sub-array. Let’s call them ‘LEFTINDEX’ and ‘RIGHTINDEX’ such that:

    - ‘LEFTINDEX' < ‘RIGHTINDEX’ and
    - 'LEFTSUBARRAY[LEFTINDEX]' > 'RIGHTSUBARRAY[RIGHTINDEX]'
- We can deduce major information from this configuration. We can say, there would be ('MID' - ‘LEFTINDEX’) inversions, where ‘MID’ is the index from where the array has been split into two. (We can say so because all the remaining elements in the left-subarray ('LEFTSUBARRAY[LEFTINDEX+ 1]', ‘LEFTSUBARRAY[LEFTINDEX+ 2]’ ….. ‘LEFTSUBARRAY[MID]’) will be greater than ‘RIGHTSUBARRAY[RIGHTINDEX]’)
- Follow the above approach to find the number of inversions.

Time Complexity: O(nlogn)
