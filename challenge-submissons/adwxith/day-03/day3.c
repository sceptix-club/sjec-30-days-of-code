#include<stdio.h>
int main()
{
int a[100];
int i,n,avg,count;
printf("enter the no of elemets:");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
count+=a[i];
}
avg=count/n;
for(i=0;i<n;i++)
{
    if (a[i]>avg)
    {
    printf("%d",a[i]);
    printf("\t");
}
}
}