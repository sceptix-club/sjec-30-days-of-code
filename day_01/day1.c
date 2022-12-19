#include <stdio.h>

int main(void) {
  int a, b;

  // Read in the values of a and b from the user
  printf("Enter the values of a and b: ");
  scanf("%d %d", &a, &b);

  // Iterate through all integers between a and b (inclusive)
  for (int i = a; i <= b; i++) {
    // Check if the number is a multiple of three
    if (i % 3 == 0) {
      printf("Foo\n");
    }
    // Check if the number is even and not a multiple of three
    else if (i % 2 == 0) {
      printf("Bar\n");
    }
    // The number is odd and not a multiple of three
    else {
      printf("Baz\n");
    }
  }

  return 0;
}
