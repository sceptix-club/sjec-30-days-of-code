# Pick Sides
For this problem, you have to implement a program which arranges the given shapes in descending order of their areas.
- **Preferred Language(s): Python**

Hint: Use Python Dictionaries.

Given the raduis of a circle, the side a square, the side of an equilateral triangle, length and breadth of a rectangle, find its areas, and print the shapes in descending order of their areas.

## Sample Input
```
16
16
16
17 18
```

### Input Format
- An integer `p`, presenting the radius of a circle.
- An integer `q`, presenting the side of a square.
- An integer `r`, presenting the side of an equilateral triangle.
- Two  integers `s` and `t`, presenting the length and breadth of a rectangle

## Sample Output
```
Circle
Rectangle
Square
Triangle
```

### Output Format
Four strings on four lines. Print the name of the shape with its first letter capitalised. `Circle`, `Triangle`, `Square`,and `Rectangle` are the only valid options.

### Explanation
Out of the given shapes, the cirle has an area of ~804, the square has an area of 256, the triangle has an area of ~111, the rectangle has an area of 306.
In descending order, `804 > 306 > 256 > 111`.
Hence, Circle > Rectangle > Square > Triangle.
