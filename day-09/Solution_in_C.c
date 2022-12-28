#include<stdio.h>
int diamond_up();
int diamond_down();
int n;
void main()
{

     scanf("%d",&n);
     diamond_up();
     diamond_down();
}
int diamond_up()
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
             printf("# ");
        }
        printf("\n");
    }
}
int diamond_down()
{
    int i,j,k;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=n-1;k++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
