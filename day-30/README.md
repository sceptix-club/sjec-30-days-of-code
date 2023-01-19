# Rolling Fibonacci

For this challenge, you have to write a program that finds the Mth term of an N-Fibonacci sequence where each number is the sum of the last N numbers.
The first N-1 terms are all 0. The Nth term is 1.

The first 10 terms of the first 5 N-Fibonacci numbers would be:

- 1-Fibonacci = `1, 1, 1, 1, 1, 1, 1, 1, 1, 1, ...` (each term is a sum of the last term)
- 2-Fibonacci = `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...` (each term is a sum of the last TWO terms)
- 3-Fibonacci = `0, 0, 1, 1, 2, 4, 7, 13, 24, 44, ...` (each term is a sum of the last THREE terms)
- 4-Fibonaaci = `0, 0, 0, 1, 1, 2, 4, 8, 15, 29, ...`
- 5-Fibonacci = `0, 0, 0, 0, 1, 1, 2, 4, 8, 16, ...`

### Input Format
- Non-negative integer `m`, presenting the term to be found.
- Non-negative integer `n`, to form the N-Fibonacci sequence.

## Sample Input 1
```
7
3
```


## Sample Output 1
```
7
```

### Explanation

An N-fibonacci sequence with N = 3 would be 0, 0, 1, 1, 2, 4, 7, 13... (each term is the sum of the last **three** terms).
The 7th term in this sequence is 7. 

## Sample Input 2
```
10
5
```

## Sample Output 2
```
16
```

### Explanation

An N-fibonacci sequence with N = 5 would be 0, 0, 0, 0, 1, 1, 2, 4, 8... (each term is the sum of the last **five** terms).
The 10th term in this sequence is 16. 
