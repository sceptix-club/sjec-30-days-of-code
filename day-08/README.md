# The Prime Range

For this challenge, print out the count of numbers between all pairs of consecutive prime numbers (exclusive) in a given range.

### Input Format
- Non-negative integer `m`
- Non-negative integer `n`

`m` < `n`

## Sample Input 1
```
2
10
```

## Sample Output 1
```
2 - 3 : 0
3 - 5 : 1
5 - 7 : 1
```

### Explanation
Between 2 and 10, there are four prime numbers - `2, 3, 5, and 7`.
Between each consecutive pair,
- Between 2 and 3 there are 0 numbers.
- Between 3 and 5 there is 1 number (4).
- Between 5 and 7 there is 1 number (6).
and that's all.

## Sample Input 2
```
5
25
```

## Sample Output 2
```
5 - 7 : 1
7 - 11 : 3
11 - 13 : 1
13 - 17 : 3
17 - 19 : 1
19 - 23 : 3
```

You are reqiured to print the output in the folowing format:
```
# - # : N
...
```
`# - #` represents the prime numbers, `N` is the count of whole numbers that exist between them (exclusive).
