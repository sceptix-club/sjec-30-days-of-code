#include <stdio.h>

int collatz_steps(int n) {
    int steps = 0;
    while (n != 1) {
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
        steps++;
    }
    return steps;
}

int main() {
    int a, b, i, max_steps = 0, max_i;
    scanf("%d%d", &a, &b);
    if (a <= 0 || b <= 0 || a > b || a > 10000 || b > 10000){
        printf("Invalid input\n");
        return 0;
    }
    for (i = a; i <= b; i++) {
        int steps = collatz_steps(i);
        if (steps > max_steps) {
            max_steps = steps;
            max_i = i;
        }
    }
    printf("%d\n", max_i);
    return 0;
}

