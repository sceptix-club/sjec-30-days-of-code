#include <stdio.h>
#include <string.h>

// This lookup table stores the numeric values of the Roman numerals.
const int roman_values[26] = {
  ['I' - 'A'] = 1,
  ['V' - 'A'] = 5,
  ['X' - 'A'] = 10,
  ['L' - 'A'] = 50,
  ['C' - 'A'] = 100,
  ['D' - 'A'] = 500,
  ['M' - 'A'] = 1000
};

int
main (void)
{
  char s[32];
  printf ("Enter a Roman numeral: ");
  scanf ("%s", s);

  // Convert the Roman numeral to an Arabic numeral.
  int result = 0;
  int prev = 0;
  int i = strlen (s) - 1;
  while (i >= 0)
    {
      // Convert the character to a numeric value.
      int current = roman_values[s[i] - 'A'];

      // If the previous character has a larger value, the current character is
      // being subtracted from it.
      if (current < prev)
	{
	  result -= current;
	}
      else
	{
	  result += current;
	  prev = current;
	}

      i--;
    }

  printf ("The number in Arabic numerals is: %d\n", result);
  return 0;
}

