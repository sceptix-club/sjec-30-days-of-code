#include<stdio.h>
double find_avg(int b[],int x);
void main()
{
    int n,i;

    double mavg;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mavg=find_avg(a,n);

    for(i=0;i<n;i++)
    {
        if(a[i]>mavg)
        {
            printf("%d ",a[i]);
        }
    }
}
double find_avg(int b[],int x)
{
    int i;
    double sum=0.00;
    double avg=0.00;
    for(i=0;i<x;i++)
    {
        sum=sum+b[i];
    }
    avg=(sum/x);
    return avg;
}
