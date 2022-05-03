# Day4

## 2-Sum-Problem

Link: [https://leetcode.com/problems/two-sum/]

- Put the element as key and index as value in a map.
- For every element, check if target - element exists in the map and the index is not same to the one we are checking against.
- If found, put the indices in the vector and break.

Time Complexity: O(n)

## 4-Sum-Problem

Link: [https://leetcode.com/problems/4sum/]

- Extension of 2-Sum.
- Put the sum of all pairs in the map as keys and their indices as values.
- For every pair, check if target - sum pair exists in the map.
- Check it is unique and sort it to solve the problem.

Time Complexity: O(n<sup>2</sup>)

## Longest Consecutive Sequence

Link: [https://leetcode.com/problems/longest-consecutive-sequence/]

- Put all the elements in a map.
- Run a loop on the elements of the map.
- If element - 1 is present in the map, incremet the temporary answer and compare with the global result.
- If not, mark the current element and change answer to 1.

Time Complexity: O(n)

## Largest subarray with 0 sum

Link: [https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1]

- Make a running sum hashmap with the sum upto index i as key and the index as value.
- Initialize a sum and answer variables with zero.
- If the current sum is already present in the map, then check if the difference is the maximum result or not.

Time Complexity: O(n)

## Subarray with given XOR

Link: [https://www.interviewbit.com/problems/subarray-with-given-xor/]

- Create a running xor variable and a hashmap to store the prefix_xor with their frequencies.
- If the running xor is target, then increment the answer variable,
- Else, find the remaining, that is 
```
remain = running_xor ^ target
```
- If, remain exists in the map, then increment the answer by the freq of remain from the map.

Time Complexity: O(n)

## Longest Substring Without Repeating Characters

Link: [https://leetcode.com/problems/longest-substring-without-repeating-characters/]

### Approach: Two Pointer + HashMap

- Use two pointers i = 0 and j = -1.
- In the for loop store each element's index as value in the map.
- If the current character is already in the map, then find the maximum value of j with
```
j = max(j, mp[s[i]])
```
- Find the maximum answer by (i - j).

Time Complexity: O(n)
