#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	if (num < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}		
	}	
	return 1;
}

int main() {
	int m, n;
	printf("Enter the numbers\n");
	scanf("%d %d", &m, &n);

	int prevPrime = -1;
	for (int i = m; i <= n; i++) {
    		if (isPrime(i)) {
        		if (prevPrime != -1) {
            			printf("%d - %d : %d\n", prevPrime, i, i - prevPrime - 1);
        		}
        		prevPrime = i;
    		}
	}	

	return 0;

}
