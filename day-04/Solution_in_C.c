#include<stdio.h>
void main()
{
    int m,n,product;
    scanf("%d",&m);
    scanf("%d",&n);
    product=m*n;
    if(product%6==0 && (m!=1 && n!=1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
