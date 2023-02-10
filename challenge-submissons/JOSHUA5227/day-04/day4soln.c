#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the rows and columns:");
    scanf("%d%d",&m,&n);

    if((m*n)%6==0)
    printf("\nYes,Perfectly Filled Grid");
    else
    printf("\nNo,Imperfectly Filled Grid");

    return 0;


}