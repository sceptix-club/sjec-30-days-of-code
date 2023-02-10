#include <stdio.h>
int main()
{
        int a,b,i=0,j=0,k,c[100];

        printf("Enter the Starting and Ending Number of Your Range:");
        scanf("%d %d",&a,&b);

    if(a>=1 && a<b && b<=10000)
    {
        for(i=a;i<=b;i++)
        {
        // printf("i= %d \t",i);
        c[j]=i;

        //  printf("j= %d \n",j);
        j++;
        }
     for(k=0;k<=j-1;k++)
        {
       // printf("%d \n",c[k]);
         if(c[k]%3==0)
            printf("\n foo");

         if (c[k]%2 == 0 && c[k]%3 != 0)
            printf("\n bar");

         if (c[k]%2 !=0 &&  c[k]%3 != 0)
            printf("\n baz");

        }
    }
    else{printf("Error Please Check if your input matches the criteria   start no.>=1   end no.<=10000  start no. < end no.");};
   return 0;
}