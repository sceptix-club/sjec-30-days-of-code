# Video Compression

A video is generally made up of a sequence of images called frames. Given `n` number frames, calculate and print all of the minimum number of frames needed to be sent without losing any video quality.

If two __**consecutive**__ frames are the same, you may eliminate all copies of it such that only one remains.
- **Preferred Language(s): C, C++**
- **No external libraries are to be used.**

__Hint:__ Treating the given frames as a stack will simplify the problem.

__Note:__ "Frames" here are represented by unique decimal numbers. This is not how video compression actually works.

## Sample Input
```
21
1 4 6 6 3 4 2 2 2 8 0 4 2 4 6 6 1 1 1 1 3 
```

### Input Format
One integer `n`.
Followed by `n` lines of integer separated by a whitespace.

## Sample Output
```
1 4 6 3 4 2 8 0 4 2 4 6 1 3
```

### Explanation
```
1 4 6 6 3 4 2 2 2 8 0 4 2 4 6 6 1 1 1 1 3 
```
Out of the 21 frames given, the third frame is the same as the fourth frame. Since no two consecutive frames are to be the same, we can eliminate one of the 6s. Same goes for the seventh, eighth, and ninth frames. They're all '2'. We can eliminate two copies and retain only one '2'. We keep doing this until no two frames that are next to one another, are the same.

### Output Format
`m` space separated integers. 
Elements in the array such that no two consecutive terms are the same.
