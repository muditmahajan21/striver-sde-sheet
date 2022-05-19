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

