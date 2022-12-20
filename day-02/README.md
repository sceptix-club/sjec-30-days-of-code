# Triangular Conception
Given all three sides of `n` triangles, print one of each triangle's sides back in a specific order.
- For the first triangle, print the smallest side.
- For the second triangle, print the medium (neither the smallest nor largest) side.
- For the third triangle, print the largest side.
- For the fourth triangle, print the smallest side.
- For the fifth triangle, print the medium side.
- ... so on for all `n` triangles.
- **Preferred language(s): Python**

### Topics to learn:
- Modulo operator
- Loop counters

## Sample Input
```
5
12 11 17
3 4 6
114 114 211
12 16 25
555 999 445
```

### Input Format
An integer `n`, presenting the number of triangles.
Followed by `n` lines of **three** space separated integers that present the three sides of a triangle.

## Sample Output
```
11
4
211
12
555
```

### Output Format
`n` lines of integers presenting the prescribed side of the triangle. Each line must be separated by one newline.

### Explanation
- For the first triangle, out of `12, 11, and 17`, the smallest side is 11.
- For the second triangle, out of `3, 4, and 6`, the medium (neither largest nor smallest) side is 4.
- For the third triangle, out of `114, 114, and 221`, the largest side is 221.
- For the fourth triangle, out of `12, 16, and 25`, the smallest is 12.
- For the fifth triangle, out of `555, 999, and 445`, the medium side is 555.
