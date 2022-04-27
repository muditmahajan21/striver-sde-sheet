# Day1:

## Set Matrix Zeroes

Link: [https://leetcode.com/problems/set-matrix-zeroes/]

- Check if there is a zero in the first row and the first column.
- For each element not in the first row or first column, mark the correponding element in the first row or first column as zero.
- For each element not in the first row or first column, if the corresponding element in the first row or the first column is zero, set the element as zero.
- If the first row initially had zero, mark the entire row as zero.
- Repeat for the first column.

Time Complexity: O(n * n)

## Pascal Triangle

Link: [https://leetcode.com/problems/pascals-triangle/]

### Find the element at the given row and column of the Pascal Triangle.

- Can be found by using the formula <sup>row - 1</sup> C <sub>col - 1</sub>

Time Complexity: O(n)

### Find the complete Pascal Triangle

- Create a vector of vector of the required size.
- For i = 0 to numRows, resize the vector to the size of i + 1.
- Mark the row's first ad last element as 1.
- For j = 1 to i, compute the respective element by the formula:
```
pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
```

Time Complexity: O(n * n)

## Next Permutation

Link: [https://leetcode.com/problems/next-permutation/]

- From the back of the array, find the first element which is smaller than it's next element and store it in idx1.
- If there is no such element, then the array is sorted in reverse, next permutation will be reverse or sorted array.
- Else, from the back, again traverse the array, and find the first element greater than the element at idx1.
- Swap the values at idx1 and idx2.
- Partially reverse the array from the idx + 1 to the end of the array.

Time Complexity: O(n)

## Kadane’s Algorithm

Link: [https://leetcode.com/problems/maximum-subarray/]

- Initialize an answer and a current_sum variable with the first element of the array.
- For i = 1 to n, if the current_sum if negative, set the current_sum as 0.
- Else, add the current element to the current_sum.
- At the end of the loop, check for the answer with 
```
ans = max(ans, current_sum);
```
Time Complexity: O(n)

# Sort Colors

Link: [https://leetcode.com/problems/sort-colors/]

### First Approach

- Initializa three count variables zero, one, two.
- Count the type of numbers in the array.
- Replace the array with the respective number of type of numbers needed.

Time Complexity: O(n)

### Second Approach

- Initializ low = 0, mid = 0 and high = nums.size() - 1
- If the mid element is 0, swap the element at low and mid and increment both by 1.
- If the mid element is 1, just incement the mid by 1.
- If the mid element is 2, swap the element at mid and high and decrement high by 1.

Time Complexity: O(n)

## Best Time to Buy and Sell Stock

Link: [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/]

- Initialize a min_price = pricres[0] and answer = 0 variable.
- For every element, find the minimum element to its left.
- At each iteration of a loop, compare the element with the minimum element, and find the minimum element upto i.
- Find the current answer with prices[i] - minimum_price.
- Compare the current answer with the answer variable and find the maximum answer from the comparison.

Time Compexity: O(n)

_Codes of All Problems_

Link: [https://gitlab.com/muditmahajan21/striver-sde-sheet/-/tree/main/Day01]
