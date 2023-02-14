#include <stdio.h>
int f(int i)
{
 long int fact=1,j;

    for(j=1;j<=i;j++)
    {
    fact=fact*j;
    }
 return fact;
}
int main()
{
    long int n,x,y,z,a,b,c,ans;
    printf("Enter a Number:");
    scanf("%d",&n);
    n=n-10;
    if(n != 0)
    {

    x=n+4;
    y=x-4;
    a = f(x);
    b = f(y);
    c = f(4);

    ans = a/(b*c);
    printf("%d \n",a); //to check if correct values are being assigned
    printf("%d \n",b); //to check if correct values are being assigned
    printf("%d \n",c); //to check if correct values are being assigned
    printf("There are %d combinations \n",ans);


    }

    else
    printf("not sufficent marbles");
    return 0;
}