# Foo Bar Baz
For this problem, you have to implement a program that prints one of the words "Foo", "Bar", or "Baz" for a given range.

Given two non-negative integers `a` and `b` , for all integers between `a` and `b` (inclusive), print "Foo" if the number is a multiple of three, print "Bar" if the number is even (and not a multiple of three), or print "Baz" if the number is odd (and not a multiple of three).

### Topics to learn
- For loops.
- If conditions.
- The modulo operator.

## Sample Input
```
3
11
```

## Sample Output
```
Foo
Bar
Baz
Foo
Baz
Bar
Foo
Bar 
Baz
```

### Explanation
- 3 is multiple of three, hence "Foo"
- 4 is even, hence "Bar"
- ...
- 9 is a multiple of three, hence "Foo"
- 10 is even, hence "Bar"
- 11 is odd, hence "Baz"

### Input Constraints
1 <= `a, b` <= 10000

### Output Format
`n` lines of strings, where `n` is the range of integers between `a` and `b` (inclusive). Each string must be separated by **one newline**. 
