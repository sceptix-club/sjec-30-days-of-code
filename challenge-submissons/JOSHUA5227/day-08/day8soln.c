#include<stdio.h>
int main()
{
    int m,n,i,x,j[50],f=0,r,nos;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&m,&n);

    while(m<2)
    {m++;}
    while (m<n)
    {
        x=0;
        for(i=2;i<=m/2;i++)
        {
            if(m%i==0)
            {
                x=1;
                break;
            }
        }
            if (x == 0)
            {
                j[f]=m;
                f++;
            }
                ++m;
                

    }
     for(r=0;r<f;r++)
     {
        if(r<f-1)
        {
        nos=j[r+1]-j[r]-1;
        printf("%d - %d : %d \n",j[r],j[r+1],nos);
        }
     }
return 0;
}