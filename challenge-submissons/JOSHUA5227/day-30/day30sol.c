#include<stdio.h>
int main()
{
    int m,n,i,temp,sum=0;

    printf("Enter the term to be found :");
    scanf("%d",&m);
    int a[m];

    printf("Enter The N-fibonacci sequence :");
    scanf("%d",&n);

    for(i=0;i<=m-1;i++)
    {
        if(i<n-1)
            a[i]=0;
        else if (i==n-1)
        {
            a[i]=1;
        }
        else
        {
            temp=n;
            sum=0;
            while(temp!=0)
            {
                sum=sum+a[i-temp];
                temp--;
            }
            a[i]=sum;
        }
    }

    printf("number at %d'th sequence = %d",m,a[m-1]);
    return 0;
}