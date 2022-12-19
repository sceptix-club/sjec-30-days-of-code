#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter a range:");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(i%2==0 && i%3!=0)
            printf("Bar\n");
        else if(i%2==1 && i%3!=0)
            printf("Baz\n");
        else
            printf("Foo\n");
    }

}
