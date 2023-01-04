# Cherry Picking
For this problem, you have to implement a program that calculates what is the most amount of cherries you can pick from a row of cherry trees.

In a row of `n` cherry trees, you have to pick cherries from `m` consecutive trees. You have to choose the trees in a manner that maximises the amount of cherries you collect.
- **Preferred Langauge(s): C, C++**

Hint: Use fixed subarray sums.

## Sample Input
```
8
3
2 7 5 4 8 6 9 2
```

### Input Format
One integer `n` presenting the number of cherry trees. (newline)
Another integer `m` presenting the number of trees you can pick from. (newline)
Sequence of integers presenting the number of cherries on each of the `n` trees separated by a whitespace.

## Sample Output
`23`

### Explanation
We have to pick `3` consecutive trees such that the cherries we collect is maximised.
```
The first three trees yield 14
2 + 7 + 5  = 14
The next three trees yield 16
7 + 5 + 4 = 16
...
Out of all the trees given, choosing the fifth to seventh trees, yields the maximum amount of cherries.
8 + 6 + 9 = 23
```
