#include<stdio.h>
int main()
{
    int m,n,val;
    printf("enter the value of m*n :\n");
    scanf("%d",&m);
    scanf("%d",&n)
    val= m*n;
    if(val%6==0){
        printf("yes");
    }
else{
    printf("no");
}
    
   
   return 0;
}