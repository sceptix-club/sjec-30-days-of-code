#include <stdio.h>
int main()
{
 int t,n,a[50],b[50],c[50],q=0,r=1,s=2;
 printf("Enter the Number of Triangles: \n");
 scanf("%d",&t);

for(n=0;n<=t-1;n++)
{
printf("\nEnter the sides of each Triangle:");
scanf("%d   %d  %d",&a[n],&b[n],&c[n]);
printf("\n %d  %d  %d",a[n],b[n],c[n]);
}

for(n=0;n<=t-1;n++)
{
 if(n==q)
                {
    q=q+3;
 if(a[n] < b[n] && a[n] < c[n]) 
 printf("\n %d is smallest",a[n]);

 else if (b[n] < a[n] && b[n] < c[n]) 
printf("\n %d is smallest",b[n]);

 else
 printf("\n %d is smallest",c[n]);
                }
 if(n==r)
 {
    r=r+3;
  if((a[n] > b[n] && b[n] < c[n])   ||  (a[n] < b[n] && a[n] > c[n]))
 printf("\n %d is middle",a[n]);

 else if((b[n] > a[n] && b[n] < c[n])   ||  (b[n] < a[n] && b[n] > c[n]))
 printf("\n %d is middle",b[n]);

 else 
 printf("\n %d is middle",c[n]);
 }
 if(n==s)
 {
    s=s+3;
if(a[n] > b[n] && a[n] > c[n])
 printf("\n %d is largest",a[n]);

 else if(b[n] > a[n] && b[n] > c[n])
 printf("\n %d is largest",b[n]);

 else
  printf("\n %d is largest",c[n]);

 }

}

 return 0;
}