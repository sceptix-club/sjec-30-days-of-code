#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the rows and columns:");
    scanf("%d%d",&m,&n);

    if((m*n)%6==0)
    printf("\nYes");
    else
    printf("\nNo");

    return 0;


}