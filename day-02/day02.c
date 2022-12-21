#include <stdio.h>

int main(void) {
    // Read in the number of triangles
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);

    // Read in the sides of each triangle
    for (int i = 0; i < n; i++) {
        int a, b, c;
        printf("Enter the sides of triangle %d: ", i + 1);
        scanf("%d %d %d", &a, &b, &c);

        // Find the smallest, medium, and largest sides
        int min, med, max;
        if (a <= b && a <= c) {
            min = a;
            med = (b <= c) ? b : c;
            max = (b > c) ? b : c;
        } else if (b <= a && b <= c) {
            min = b;
            med = (a <= c) ? a : c;
            max = (a > c) ? a : c;
        } else {
            min = c;
            med = (a <= b) ? a : b;
            max = (a > b) ? a : b;
        }

        // Print the side according to the specified order
        if (i % 3 == 0) {
            printf("Triangle %d: %d\n", i + 1, min);
        } else if (i % 3 == 1) {
            printf("Triangle %d: %d\n", i + 1, med);
        } else {
            printf("Triangle %d: %d\n", i + 1, max);
        }
    }

    return 0;
}

