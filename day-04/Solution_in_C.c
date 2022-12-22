#include<stdio.h>
void main()
{
    int m,n,product;
    scanf("%d",&m);
    scanf("%d",&n);
    product=m*n;
    if(product%3==0 && product!=3)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
