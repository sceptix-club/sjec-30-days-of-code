# Collatzing Down

The [Collatz Conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture) asks whether repeating two simple arithmetic operations will eventually transform every positive integer into 1: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that these sequences always reach 1, no matter which positive integer is chosen to start the sequence.

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/ec22031bdc2a1ab2e4effe47ae75a836e7dea459)

Write a program that calculates which number requires the most "steps" to transform into 1 between a given integer range. Each step here refers to the operations done to obtain one number in the sequence (either divide by two or multiply with 3 and add 1). If multiple numbers take the same count of steps, print only the first.

## Sample Input
```
3
11
```

### Input Format
Two positive integers `a` and `b`, presenting the lower and upper limits of the range (inclusive).

#### Input Constraints
`1` <= `a` <= `b` <= 10000

### Sample Output
`9`

#### Explanation
- For 3, it takes 7 steps to get to 1 (3 -> 10 -> 5 -> 16 -> ... -> 1).
- For 4, it takes 2 steps to get to 1 (4 -> 2 -> 1).
- ...
- For 11, it takes 14 steps to get to 1 (11 - > 34 -> 17 -> ...  -> 1).

Out of all these, `9` takes 19 steps to get to 1, which is the maximum of all steps for the numbers in the given range. Hence, `9` is printed.

