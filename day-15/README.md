# Roman Numeral Interpreter
For this problem, you have to implement a program that can interpret a roman numeral, and print it in Arabic Digits.
- **Preferred language(s): Python**
- **No external Python libraries are to be used.**

### Topics to learn
- Python [str methods](https://docs.python.org/3/library/stdtypes.html#string-methods "Python str methods")


| #  | Thousands  | Hundreds  | Tens  | Units  |
| ------------ | ------------ | ------------ | ------------ | ------------ |
|  1 | M  |  C | X  | I  |
|  2 |  MM |  CC |  XX |  II |
|  3 |  MMM | CCC  | XXX  | III  |
|  4 |   | CD  |  XL | IV  |
|  5 |   | D  | L  | V  |
|  6 |   |  DC | LX  | VI  |
|  7 |   | DCC  | LXX  | VII  |
|  8 |   |  DCCC | LXXX  | VIII  |
|  9 |   | CM  | XC  | IX  |

This is the standard set of symbols used in the Roman numerals. A number containing two or more decimal digits is built by appending the Roman numeral equivalent for each, from highest to lowest, as in the following examples:

       39 = XXX + IX = XXXIX.
      246 = CC + XL + VI = CCXLVI.
      789 = DCC + LXXX + IX = DCCLXXXIX.
    2,421 = MM + CD + XX + I = MMCDXXI.

Any missing place (represented by a zero in the place-value equivalent) is omitted, as in Latin (and English) speech:

      160 = C + LX = CLX
      207 = CC + VII = CCVII
    1,009 = M + IX = MIX
    1,066 = M + LX + VI = MLXVI

[Courtesy of Wikipedia](https://en.wikipedia.org/wiki/Roman_numerals#Standard_form "Roman Numerals")


## Sample Inputs
- `IX`
- `XXI`
- `XLII`
- `MCMLXIX`
- `MMDCCXXXVI`

## Sample Outputs
- 9
- 21
- 42
- 1969
- 2736

### Input Format
A string `s` representing a number in Roman numerals.
Make sure your code works on both uppercase and lowercase strings.

### Output Format
An integer `n` representing that same number in Arabic Numeral.
- 1 <= `n` <=3999.
- Ignore any invalid strings given as input.
