# Frequency Analysis
For this problem, find the occurence of all letters and print ones with highest frequency.

- **Preferred language(s): C, C++**
### Topics to learn
- String traversal.

Given a string `s` from the English language, find the frequency of all 26 letters (case-insensitively), and print the percentage of frequency of the top five most occuring letters.

You should ignore any non-alphabetical characters (like punctuaion marks, digits, and whitespaces).

## Sample Input
```
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
```

### Input Format
A string `s` from the English language, containing only ASCII characters.

## Sample Output
```
I: 10.4%
T: 10.0%
N: 8.0%
O: 7.6%
E: 7.6%
```

### Output Format
Five lines in the format `(character): XX.X%` where (character) is the letter, and `XX.X%` is its frequency in percentage, arranged in descending order of frequency.

#### Explation
In the given string `It was a bright... him.`, there are 26 'I's, 25 'T's, 20 'N's, 19 'E's, and 19 'O's. These happen to be the most ocurring characters in the given string.

The total number of characters in the string, **excluding whitespaces**, is 250. To find the percentage of any letter's frequency, divide its occurence by the total number of characters. For `'I'`, that would be `26/250 * 100`, and so on.
