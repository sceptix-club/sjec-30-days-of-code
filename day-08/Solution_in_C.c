#include <stdio.h>
int prime(int a);
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int a[y-x],count=0;
    for(int i=x;i<=y;i++)
    {
        if(prime(i))
        {
            a[count++]=i;
        }
    }
    for(int i=0;i<count-1;i++)
    {
        int b=a[i+1]-a[i]-1;
        printf("%d - %d : %d\n",a[i],a[i+1],b);
    }
    return 0;
}
int prime(int a)
{
    int n=a/2;
    for(int i=2;i<=n;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
