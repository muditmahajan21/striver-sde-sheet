# Day3

## Majority Element

Link: [https://leetcode.com/problems/majority-element/]

- Initialize and and count, both as zero.
- For every element in the array, if 
  - The count is zero, set the element as the answer.
  - If not, 
    - If the answer is equal to current element, then increment count.
    - Else, decrement the count.

Time Complexity: O(n)

## Majority Element II

Link: [https://leetcode.com/problems/majority-element-ii/]

- Similar to above, except we will take node of two answers and two count variables.
- As, there will be at most 2 majority elements.
- After the initial loop, run another loop to check if the variables we found are actually majority or not.

Time Complexity: O(n)

## Pow(x, n)

### Topic: Binary Exponentiation

Link: [https://leetcode.com/problems/powx-n/]

- If n is negative, take the reciprocal of x.
- Initialize ans as 1.0 and take another temp variable for n.
- Whilw temp is greater than zero, if
  - it's odd, then multiply x to answer 
- Multiply x with itself.
- Half the temp variable.

Time Complexity: O(logn)

## Search a 2D Matrix

Link: [https://leetcode.com/problems/search-a-2d-matrix/]

- Basically, binary search in a matrix instead of an array.
- Check from the middle row if the element exists at the starting or the ending of the row.
- If not, then change the low and high accordingly to the values of the starting and the ending elements of the row.
- After finding the target row, run the basic binary search on the row to check for the target element.

Time Complexity: O(log(n * m))

## Unique Paths

Link: [https://leetcode.com/problems/unique-paths/]

- Easy PnC Solution avaialable for the problem.
- There are exactly n + m - 2 steps followed everytime to get to the end.
- So, we will calculate the value of <sup>n + m - 2</sup>C<sub>n - 1</sub> *OR*  <sup>n + m - 2</sup>C<sub>m - 1</sub>

Time complexity: O(n - 1) *OR* O(m - 1).

## Reverse Pairs

Link: [https://leetcode.com/problems/reverse-pairs/]

### Topic: Merge Sort

- We will be using the Merge Sort Algorithm to solve this problem. We split the whole array into 2  parts creating a Merge Sort Tree-like structure. During the conquer step we do the following task : 

- We take the left half of the Array and Right half of the Array, both are sorted in themselves. 

- We will be checking the following condition arr[i] <= 2*arr[j]  where i is the pointer in the Left Array and j is the pointer in the Right Array. 

- If at any point arr[i] <= 2*arr[j] , we add 1  to the answer as this pair has a contribution to the answer. 

- If Left Array gets exhausted before Right Array we keep on adding the distance j pointer traveled as both the arrays are Sorted so the next ith element from Left Subarray will equally contribute to the answer.

### Implementation

- We first of all call a Merge Sort function, in that we recursively call Left Recursion and Right Recursion after that we call Merge function in order to merge both Left and Right Calls we initially made and compute the final answer.

- In the Merge function, we will be using low, mid, high values to count the total number of inversion pairs for the Left half and Right half of the Array.

-  Now, after the above task, we need to Merge the both Left and Right sub-arrays using a temporary vector.

- After this, we need to copy back the temporary vector to the Original Array. Then finally we return the number of pairs we counted.
