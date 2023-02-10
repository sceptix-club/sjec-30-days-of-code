# Cheryl's Game

For this challenge, write a program that keeps adding the reverse of a number back to itself until it forms a palindrome. Once obtained, print the palindrome.
- **Preferred Language(s): Python**

__Note: There are certain cases where the number never reaches a palindrome. In order to ensure successful execution of your program, limit the number of additions to 500.__

## Sample Input 0
`984`

## Sample Input 1
`177013`

## Sample Input 2
`196`

### Input Format
A positive integer `n`.

#### Input Constraints
10 <= `n` <= 100000000

### Sample Output 0
`9339`

#### Explanation
- Start with 984.
- 984 + 489 = 1473
- 1473 + 3741 = 5214
- 5214 + 4125 = 9339
- 9339 is a palindrome, print and terminate.

### Sample Output 1
`487784`

### Sample Output 2
`NA`
__196 is a number for which there is no known palindrome obtainable by following this procedure. In order to ensure that your program does not crash, limit the computation to a suitably large number.__

#### Output Format
An integer `m` presenting the required palindrome.

