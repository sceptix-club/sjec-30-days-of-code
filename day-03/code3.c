#include<stdio.h>
int main()
{
    int a[50],i,n,sum,lar;
    float avg;
    printf("enter the size of the array\n");
    scanf("%d",&n);
   
    printf("enter the elements\n");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
   sum = avg = 0;
   for(i = 0;i<=n; i++)
    {
      sum = sum + a[i];
   }
   avg = sum/n;
    for(i = 0;i<=n;++i)
 {
    if(a[i]>avg)
     {
       printf(" %d", a[i]);
    }
   }
   return 0;
}