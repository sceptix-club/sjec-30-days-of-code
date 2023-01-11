#include <stdio.h>
#include <string.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    scanf("%d", &n);
    if(n < 10 || n > 100000000){
        printf("Input Constraints not met.");
        return 1;
    }
    int count = 0;
    while (count < 500) {
        int r = reverse(n);
        if (n == r) {
            printf("%d\n", n);
            return 0;
        }
        n += r;
        count++;
    }
    printf("NA\n");
    return 0;
}

