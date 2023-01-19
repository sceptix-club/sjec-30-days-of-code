#include <stdio.h>
void main()
{
    int i,n,m,max=0,curr_cherries=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        curr_cherries=curr_cherries+a[i];
    }
    max=curr_cherries;
    for(i=m;i<n;i++)
    {
        curr_cherries=curr_cherries-a[i-m]+a[i];
        if(curr_cherries>max)
        {
            max=curr_cherries;
        }
    }
    printf("%d",max);
}
