#include<stdio.h>
int main()
{
    int n,m,i,j=0,k=0,sum=0,res=0;
    printf("Enter the number of trees :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number of consective trees:");
    scanf("%d",&m);

    printf("Enter the number of cherries :");
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=n-1;i++)
    {
    for(sum=0,j=k;j<=m-1;j++)
    {
        if(m>n)
        break;
        else
        {
        sum=sum+a[j];
        }
    }

     k++,m++;
     if(sum>=res)
     res=sum;
    }
    printf("\n Maximum amount of cherries collected = %d",res);
    return 0;
}
