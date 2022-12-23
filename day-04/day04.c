#include <stdio.h>

int main(void)
{
    int m, n;
    printf("Enter number of colums: ");
    scanf("%d", &m);
    printf("Enter number of rows: ");
    scanf("%d", &n);

    if ((m % 2 == 0 && n % 3 == 0) || (m % 3 == 0 && n % 2 == 0))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

