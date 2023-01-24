#include<stdio.h>
int reverse(int a)
{
    int rev,rem=0;
    while(a!= 0)
    {
        rev=a%10;
        rem=rem*10+rev;
        a=a/10;
    }
    return rem;
}
int main()
{  
    int n,temp,temp1;
    printf("Enter a Number :");
    scanf("%d",&n);

    while(n!=reverse(n))
    {
    temp=reverse(n);
    n=temp+n;
    }

    printf("%d",n);
}