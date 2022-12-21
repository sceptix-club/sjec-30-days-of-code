#include<stdio.h>
int small(int x,int y,int z);
int large(int x,int y,int z);
void main()
{
    int n,i;
    scanf("%d",&n);
    int sides[n][3];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&sides[i][0],&sides[i][1],&sides[i][2]);
    }
    for(i=0;i<n;i++)
    {
        int a = sides[i][0];
        int b = sides[i][1];
        int c = sides[i][2];
        if(i%3==0)
        {
            printf("%d\n", small(a, b, c));
        }
        else if(i%3==1)
        {
            printf("%d\n", (a+b+c-small(a,b,c)-large(a,b,c)));
        }
        else
        {
            printf("%d\n", large(a,b,c));
        }
    }
}
int small(int x,int y,int z)
{
    int small = x;
    if(small>y)
        small = y;
    if(small>z)
        small = z;
    return small;
}
int large(int x,int y,int z)
{
    int big = x;
    if(big<y)
        big = y;
    if(big<z)
        big = z;
    return big;
}
