#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,k=1,j=0;
int a[100];
int b[100];
scanf("%d", &n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    if (b[j-1]!=a[i]){
        b[j]=a[i];
        j++;
    }
    }
for(i=0;i<j;i++)
    printf("%d ",b[i]);
}

