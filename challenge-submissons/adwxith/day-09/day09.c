
#include <stdio.h>

void printDiamond(int n)
{
	int space = n - 1;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < space; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("# ");
		printf("\n");
		space--;
	}
	space = 0;
	for (int i = n; i > 0; i--)
	{
		
		for (int j = 0; j < space; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("# ");
		printf("\n");
		space++;
	}
}

int main()
{
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
	printDiamond(n);
	return 0;
}
