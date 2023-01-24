#include<stdio.h>
int main()
{
    int m,n,i,j,k,counter=0,temp=0;
    printf("Enter your range :");
    scanf("%d %d",&m,&n);

    int arr[i=n-m+1],count[i=n-m+1],track[i=n-m+1];

    for(j=0;j<=i-1;j++)
   {
    arr[j]=m;
    track[j]=m;
    m++;
   }

    for(j=0;j<=i-1;j++)
    {
        while(arr[j]!=1)
        {
            if(arr[j]%2==0)
                {
                    arr[j]=arr[j]/2;
                    counter++;
                }
            else
            {
                arr[j]=arr[j]*3+1;
                counter++;
            }
        }
        count[j]=counter;
        counter=0;
    }

    for(j=0;j<=i-2;j++)
    for(k=0;k<=i-2;k++)
    {
        if(count[k]<count[k+1])
        {
            temp=count[k];
            count[k]=count[k+1];
            count[k+1]=temp;
            temp=track[k];
            track[k]=track[k+1];
            track[k+1]=temp;

        }
    }
        printf("%d %d \n",track[0],count[0]);
    return 0;
}