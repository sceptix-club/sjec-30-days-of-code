#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char letters[26]={
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' // 0- 25 array index
};
int main()
{   
    int i,j,k,arr[26];
    char sen[1000];
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
    for(j=0;j<5;j++)
    {
        for(k=0;k<26;k++)
        {
            if(arr[k]>=arr[k+1])
            
        }
    }
}