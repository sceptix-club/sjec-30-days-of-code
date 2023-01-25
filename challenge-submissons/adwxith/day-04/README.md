# Tiling Trouble
Given a board with `m` rows and `n` columns, determine whether it is possible to fill the entire board with 'L' shaped tile peices, such that no peices overlap, and all of the board is covered.

- **Preferred Languages: C, C++, java, Python**
- **No external Python libraries are to be used.**

Hint: Use the modulo operator to your advantage.

![](https://cdn.discordapp.com/attachments/724906362982891600/1054421528944574464/empty_grid.png)
![](https://cdn.discordapp.com/attachments/724906362982891600/1054421529364013126/imperfectly_filled.png)
![](https://cdn.discordapp.com/attachments/724906362982891600/1054421529707937892/perfectly_filled.png)

### Input Format
An integer `m`, presenting the number of rows.
An integer `n`, presenting the number of columns.

### Output Format
The string "Yes" or "No", followed by a newline.

## Sample Input 1
```
3
4
```

## Sample Output 1
```
Yes
```

### Explanation
For a `3 x 4` board, the tiles can be fit perfectly in a manner that covers the entirety of the board with and does not extend the boundaries of the board.

## Sample Input 2
```
4
4
```

## Sample Output 2
```
No
```

### Explanation
A `4 x 4` board cannot be covered entirely without having a piece that extends the boundaries of the board.
