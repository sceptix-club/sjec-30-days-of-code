#include<stdio.h>
int f(int n,int s){return n==1?s:f(n%2?3*n+1:n/2,s+1);} int main(){int a,b,i,m,mi;scanf("%d%d",&a,&b);if(a>0&&a<=b&&b<=10000)for(i=a;i<=b;i++)if(f(i,0)>m)m=f(i,0),mi=i;printf("%d",mi);}

