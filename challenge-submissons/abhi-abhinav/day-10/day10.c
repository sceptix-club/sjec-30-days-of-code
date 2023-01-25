#include <stdio.h>

int main() {
    int m;
    printf("Enter the number of marbles: ");
    scanf("%d", &m);

    // Ensure that there are enough marbles for each friend to get at least 2
    if (m < 10 || m > 100) {
        printf("Invalid number of marbles.\n");
        return 0;
    }

    int n = 0;
    for (int a = 2; a <= m - 8; a++) { // loop through number of marbles for friend 1
        for (int b = 2; b <= m - a - 6; b++) { // loop through number of marbles for friend 2
            for (int c = 2; c <= m - a - b - 4; c++) { // loop through number of marbles for friend 3
                for (int d = 2; d <= m - a - b - c - 2; d++) { // loop through number of marbles for friend 4
                    // friend 5 gets the remaining marbles
                    int e = m - a - b - c - d;
                    if (e >= 2) { // ensure friend 5 gets at least 2 marbles
                        n++;
                    }
                }
            }
        }   
    }

    printf("There are %d ways to divide the marbles.\n", n);

    return 0;
}
