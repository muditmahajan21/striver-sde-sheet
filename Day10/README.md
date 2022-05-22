# Day10

## Permutations

Link: [https://leetcode.com/problems/permutations/]

- Create an answer vector.
- Pass it on along with the nums vector and an index variable set to 0 to a recursive solve function.
- In the solve function, if the index is equal to the size of the nums vector, add the whole nums vector to the answer vector.
- Run a loop from index to the nums.size() and swap the values at the current index and the index.
- Call the solve function with the same arguments, except incrementing the index variable.
- De-swap tbe swapped elements for the next iteration.
- Return the answer vector in the original function.

Time Complexity: O(n! * n)

## 
