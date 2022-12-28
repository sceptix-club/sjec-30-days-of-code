# Marbles!
For this problem, you have to implement a program that calculates all the possible ways one could distribute marbles among friends.
- **Preferred language(s): C, C++**

Given `m` marbles, calculate the total number of ways it is possible to divide them among `5` friends, ensuring that each friend gets at least `2` marbles.

### Topics to learn:
- Nested for loops.
- or, Mathematics!

## Sample Input
57

## Sample Output
249900

### Explanation
Given 57 marbles, you can divide it as:
- 2, 2, 2, 2, 49
- 2, 2, 2, 3, 48
- 2, 2, 2, 4, 47
- ...
- 11, 11, 11, 11, 13
- ...
- 49, 2, 2, 2, 2

There are `249900` such possible combinations. 
Note that 2, 2, 2, 2, 49 is different from 49, 2, 2, 2, 2 as the friends are unique! 

### Input Constraints
10 <= `m` <= 100

### Output Format
One integer `n`, representing the total number of possible combinations.

