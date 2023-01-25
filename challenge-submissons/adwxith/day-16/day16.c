#include <stdio.h>
int main() {
  int n, m;
  scanf("%d %d", &n, &m);

 
  int cherries[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &cherries[i]);
  }
  int max = 0;

  int pre[n];
  pre[0] = cherries[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + cherries[i];
  }

  for (int i = 0; i < n - m + 1; i++) {
    int current;
    if (i == 0) {
      current = pre[m - 1];
    } else {
      current = pre[i + m - 1] - pre[i - 1];
    
    if (current > max) {
      max = current;
    }
  }

  printf("%d\n", max);

 
}
return 0;
}
