# Augustus' Secret

For this challenge, write a program that enciphers text by replacing all occurences of one character with a randomly chosen different character.

For all 26 letters of the English alphabet, assign each letter a randomly chosen different letter.

**For example**,
A might be substituted for N,
B might be substiutued for J
...

| Original Letter | Substituted Letter |
| :------------: | :------------: |
| A  | N  |
|  B |  J |
|  C | A  |
| D  |  B |
| E  |  Y |
| F  |  O |
| G |  F |
| H |  W |
| I |  L |
| J |  Z |
| K |  M |
|  L|  P |
|  M|  X |
|  N|  I |
|  O| K  |
|  P|  U |
|  Q|  V |
|  R|  C |
|  S|  D |
|  T|  E |
|  U|  G |
|  V|  R |
| W | Q  |
|  X |  S |
|  Y | T  |
| Z |  H |

Ensure that in the process of random subtitution, no letter is substituted back to itself, and that no letter can be substituted twice.
Now, take an input string from the user, and replace all occurences of the original letters with its subsitutions while leaving other non-alphabetical characters as is. Treat the string case-insensitively.
- **Preferred Language(s): C/C++**

## Sample Input
```
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
```

### Input Format
An ASCII string `s`. 

### Sample Output
```
Le qnd n jclfwe akpb bnt li Nuclp, nib ewy apkamd qycy declmlif ewlceyyi. Qlideki Dxlew, wld awli ighhpyb liek wld jcynde li ni yookce ek ydanuy ewy rlpy qlib, dpluuyb vglampt ewckgfw ewy fpndd bkkcd ko Rlaekct Xnidlkid, ewkgfw ike vglampt yikgfw ek ucyryie n dqlcp ko fcleet bgde ockx yieyclif npkif qlew wlx.
```

#### Explanation
All occurences of `A` were replaced with `N`. All occurences of `B` were replaced with `J`. ... and so on.

#### Output Format
A string `t` presenting the enciphered form of the string `s`.

