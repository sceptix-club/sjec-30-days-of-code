#include<stdio.h>
int main()
{
int a[100],n,s,x=0,y;

     printf("Enter the Size of Array: \n");
    scanf("%d",&s);

     printf("Please Enter %d numbers: \n",s);

    for(n=0;n<=s - 1;n++)
{
    scanf("%d",&a[n]);
    x=x + a[n];
}
    y=x/s;
    printf("average is %d \n",y);

    for(n=0;n<=s - 1;n++)
{
    if(a[n]>y)
    printf("%d \t",a[n]);

}
return 0;
}