#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  // Array to store the number of cherries on each tree
  int cherries[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &cherries[i]);
  }

  // Initialize maximum number of cherries to 0
  int max_cherries = 0;

  // Prefix sum array to store the sum of cherries[0]..cherries[i]
  int prefix_sum[n];
  prefix_sum[0] = cherries[0];
  for (int i = 1; i < n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + cherries[i];
  }

  // Iterate through all possible starting indices of the consecutive sequence
  for (int i = 0; i < n - m + 1; i++) {
    // Calculate the number of cherries in the current sequence
    int current_cherries;
    if (i == 0) {
      current_cherries = prefix_sum[m - 1];
    } else {
      current_cherries = prefix_sum[i + m - 1] - prefix_sum[i - 1];
    }

    // Update the maximum number of cherries if necessary
    if (current_cherries > max_cherries) {
      max_cherries = current_cherries;
    }
  }

  printf("%d\n", max_cherries);

  return 0;
}

