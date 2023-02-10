#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter number of frames :");
   scanf("%d",&n);
   int f[n];
   
   printf("Enter frames: \n");
   for(i=0;i<=n-1;i++)
   scanf("%d",&f[i]);

   for(i=n;i>=0;i--) // i= 9 if i8 == i9 j=8 j<=10 j++; j8 =j9 
   {
      if(f[i-1]==f[i])
      {
         for(j=i-1;j<=n;j++)
         {
            f[j]=f[j+1];

         }
             n--;
      }
   }

   for(i=0;i<=n-1;i++)
   {
      printf("%d ",f[i]);
   }
   return 0;
}