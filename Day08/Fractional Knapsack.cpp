# Day8

## N meetings in one room 

Link: [https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room]

- Create a vector of pair of end and starting times of each meeting.
- Sort on the basis of the ending times of the meetings.
- For each meeting after the first meeting, check if the starting time is greater than ending time of previous meeting.
- Make a separate variable for the ending time of the previous meeting.
- Also, initializa answer with 1 as there must be atleast one meeting than can take place.

Time Complexity: O(nlogn)

## Minimum Platforms 

Link: [https://practice.geeksforgeeks.org/problems/minimum-platforms]

- Sort both arrays.
- For each arrival, check if departure is greater than or equal to the arrival.
- If yes, increment the answer variable.
- Else, increment the counter for the departure.

Time Complexity: O(nlogn)

## Job Sequencing Problem

Link: [https://practice.geeksforgeeks.org/problems/job-sequencing-problem]

- Sort the array of the jobs on the basis of the profit associated with it by writing a separate function for the custom sort.
- Create a boolean vector to check if the jobs can be done at a date of size (n + 1).
- Run a loop from 0 to n and another loop from the minimum of n and the deadline of the i-th job to 1.
- If the particular slot at day j is free then, mark it as taken and increment the values of answer count as well as the profit.
- Break the loop for a job done.
- Return a vector of the answer count and the profit.

Time Complexity: O(nlogn)

##  Fractional Knapsack

Link: [https://practice.geeksforgeeks.org/problems/fractional-knapsack]

- Sort the array on the basis of the (value / weight) by using a custom sort function.
- Initialize a double answer variable and a int current_weight variable.
- Run a loop from 0 to n and if the current weight + the weight of the current index are less than or equal to the total weight, then add the weight to current weight and the profit to the answer.
- Else, add the value of the item according to the fraction of the weight and the remain capacity.
- Break the loop and return the answer.

Time Complexity: O(nlogn)
