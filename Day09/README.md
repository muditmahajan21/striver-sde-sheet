# Day9

##  Subset Sums

Link: [https://practice.geeksforgeeks.org/problems/subset-sums]

- Create an answer vector and pass it to a helper function along with the given array, an index starting from 0 and a sum variable starting from 0 as well.
- In the helper function, if the current index is equal to the length of the givena array, then push the sum into the answer vector and return.
- Else, recurse once, adding the current index to the sum variable and once without adding it.
```
solve(idx + 1, sum + arr[idx], arr, ans);
solve(idx + 1, sum, arr, ans);
```

Time Complexity: O(2^n)

## Subsets II

Link: [https://leetcode.com/problems/subsets-ii/]

- Create an answer vector and a temp res vector and pass them on to a helper function with an index starting from zero as well.
- Push the temp res vector in the answer vector.
- Run a loop from the index to the length of the nums array.
- Check for duplicates by checking the consecutive elements.
- Add the current element to the temp res vector.
- Recurse inside of the loop by putting the (i + 1) as the index variable.
- Pop back the element pushed in the temp res vector for the next iteration.

Time Complexity: O(2^n)

## Combination Sum

Link: [https://leetcode.com/problems/combination-sum/]

- Create an answer vector along with a temp res vector and pass them on to a helper recursive function.
- Sort the given array before passing to the function.
- In the helper function, if target is zero, add the temp res vector to the answer vector and return.
- If the current index is equal to the size of the array or tbe current element is learger than the target, then return.
- Push tbe current element in the temp res array.
- Call the solve function with the initial values except subtract the current index element from the target.
- Pop the element pushed in the temp res vector.
- Again, call the solve function with the initial values, except increment the index variable.
- Return answer vector in the original function.

Time Complexity: O(2^target)

## Combination Sum II

Link: [https://leetcode.com/problems/combination-sum-ii/]

- Create an answer vector along with a temp res vector, sort the given array and pass them all to a helper recursive function.
- In the hlper function, if the target is zero, push the res vector into the answer vector and return.
- Else, run a loop from the index passed to the function to the length of the array.
- If the current element is greater than the target, then break out of the loop.
- Check for the duplicates with checking the neighbouring elements.
- Push the current element in the temp res vector.
- Call the solve function with the same values except, decrement the target with the current element and increment the i by 1 to take care of only having one element in a subset.
- Pop the last pushed value from the temp res array.
- Return th answer vector in the original array.

Time Complexity: O(2^n)

## Palindrome Partitioning

Link: [https://leetcode.com/problems/palindrome-partitioning/]

- Create an answer vector along with a temp res vector, pass them on to the helper function along with an index variable set to zero.
+ If the index is equal to length of the string, add it to the answer vector and return.
- Run a for loop from the index to the length of the string.
- Write a separate function to check if a substring is a plaindrome or not.
- If the substring from index to i is palindrome, then: 
  - Extract the substring using the substr function.
  - Push it into the temp res vector call the solve function with index + 1.
  - Pop the substring added to the temp res vector.
- Return the answer vector in the original function.

Time Complexity: O((2^n)* k *(n/2))

## Permutation Sequence

Link: [https://leetcode.com/problems/permutation-sequence/]

- Initialize two empty string, answer and number.
- Create a factorial vector.
- Run a loop from 0 to n, and add each (i + 1)th number to the numer string.
- Fill the factorial vector accordingly in the loop.
- Outside the loop, decremtent the k to take care of 0-indexing.
- Run a loop from the back of the string.
- Find the required index with the formula 
```
idx = k / fact[i]
```
- Update the value of k by: 
```
k %= fact[i]
```
- Add the character at the idx to the answer string.
- Erase the added character with the erase function.
- Return the answer string.

Time Complexity: O(n^2)
