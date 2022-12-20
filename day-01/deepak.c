#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the start point and end point respectively \n");
    scanf("%d \n,%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        if(i%3==0)
        printf("\nfoo");
        else if(i%2==0 || i==!i/3)
        printf("\nbar");
        else if (i%2==!0)
        printf("\nbaz");
    }
   return 0;

}