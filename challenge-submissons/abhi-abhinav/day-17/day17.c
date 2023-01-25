#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, *a, i, j, count=1;
scanf("%d", &n);

a = (int*)malloc(n * sizeof(int)); //dynamic memory allocation for array

scanf("%d", &a[0]); //reading first element separately to avoid comparison with previous element
printf("%d ", a[0]); //printing first element

for(i=1; i<n; i++)
{
    scanf("%d", &a[i]);
    if(a[i] != a[i-1]) //comparing current element with previous element
    {
        count++;
        printf("%d ", a[i]);
    }
}


free(a); //freeing dynamically allocated memory

return 0;

}
