#include <stdio.h>

int main() {
    int n;
    printf("Enter width of diamond: ");
    scanf("%d", &n);
    
    // Check input constraints
    if (n < 1 || n > 200) {
        printf("Invalid input. Please enter a value between 1 and 200.\n");
    return 0;
    }

    // Print upper half of diamond
    for (int i = 0; i < n; i++)
    {
        // Print spaces before # symbols
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print # symbols
        for (int j = 0; j <= i; j++)
        {
            printf("# ");
        }

        // Move to next line
        printf("\n");

    }

    // Print lower half of diamond
    for (int i = n - 2; i >= 0; i--)
    {
        // Print spaces before # symbols
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print # symbols
        for (int j = 0; j <= i; j++)
        {
            printf("# ");
        }

        // Move to next line
        printf("\n");

    }

    return 0;

}
