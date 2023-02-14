#include<stdio.h>
#include<string.h>
#include<ctype.h>

 char letters[26]={
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' // 0- 25 array index
};
int main()
{   
    int i,j,k,temp;
    float arr[26];
    char sen[1000],temp1;
    printf("Enter your sentence : \n");
    scanf("%s",sen);
    i=strlen(sen);

    for(j=0;j<=i-1;j++)
    {
        sen[j]=toupper(sen[j]);
        for(k=0;k<26;k++)
        {
            if(sen[j]==letters[k])
            {
            arr[k]++;
            break;
            }
        }
    }
    for(k=0;k<26;k++)
    arr[k]=(arr[k]/i)*100;
    
    for(k=0;k<26;k++)
    for(j=k+1;j<26;j++)
        if(arr[k]<arr[j])
        {
            temp=arr[k];
            arr[k]=arr[j];
            arr[j]=temp;
            temp1=letters[k];
            letters[k]=letters[j];
            letters[j]=temp1;
        }
    for(k=0;k<5;k++)
    {
        printf("%c = %.2f \n",letters[k],arr[k]);
    }
}