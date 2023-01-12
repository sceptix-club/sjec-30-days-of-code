# The Game Is... Something 

For this challenge, write a program that deciphers substituion ciphertext with the help of Frequency Analysis.

Using the previous day's challenge, generate a ciphertext where all letters are substituted for a randomply chosen different letter. Your goal is to decipher this text without knowing what letter substitutes what.

Of course a naive approach would be to try substituting all letters with all other letters in order to bruteforce your way into a solution. This can however be ridiculously inefficient. The alterante method presented will exploit a quirk of the English language itself.

It turns out that in the language of English, certain letters have a tendency of occuring more frequently than others. The letter 'E' for example appears a lot more than, let's say 'W' in a paragraph of standard english text. Each letter of the English alphabet exhibits unique frequency characteristics.

![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/English_letter_frequency_%28frequency%29.svg/1024px-English_letter_frequency_%28frequency%29.svg.png)

By running frequency analysis on the ciphertext, the (random) letters of the substitution can be laid out in descending order of their frequencies. Then, characters with the highest frequency in the ciphertext can be matched with the characters with the same frequency in the English language. If 'N' appeared the most time in the ciphertext, it can be assumed to substitute for 'E'. If 'K' appeared the second most number of times, it can be assumed to substitute for 'T', and so on.

By matching the frequencies of all the letters and suitably replacing all their occurences in the given ciphertext, the initial message can (hopefully) be read and made sense of.
 
- **Preferred Language(s): C/C++**

## Sample Input
```
Le qnd n jclfwe akpb bnt li Nuclp, nib ewy apkamd qycy declmlif ewlceyyi. Qlideki Dxlew, wld awli ighhpyb liek wld jcynde li ni yookce ek ydanuy ewy rlpy qlib, dpluuyb vglampt ewckgfw ewy fpndd bkkcd ko Rlaekct Xnidlkid, ewkgfw ike vglampt yikgfw ek ucyryie n dqlcp ko fcleet bgde ockx yieyclif npkif qlew wlx.
```

### Input Format
An ASCII string `t`. 

### Sample Output
```
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
```

*Note:*
*- All letters may not be accurately replaced. This is fine so long as a majority of the letters have been correctly matched and the message can be made sense of.*
*- To get better results, try enciphering and deciphering text with lots of words. This ensures the frequency of characters approaches the standard observation.*

#### Output Format
A string `s` presenting the deciphered form of the string `t`.

