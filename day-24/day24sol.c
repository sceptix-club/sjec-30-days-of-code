#include<stdio.h>
#include<string.h>
#include<ctype.h>
 char letters[26][2]=
{
    {'A','N'},{'B','J'},{'C','A'},{'D','B'},{'E','Y'},{'F','O'},{'G','F'},
    {'H','W'},{'I','L'},{'J','Z'},{'K','M'},{'L','P'},{'M','X'},{'N','I'},
    {'O','K'},{'P','U'},{'Q','V'},{'R','C'},{'S','D'},{'T','E'},{'U','G'},
    {'V','R'},{'W','Q'},{'X','S'},{'Y','T'},{'Z','H'}
};

int main()
{
    int i,j,k;
    char sen[1000];
    printf("Enter your sentence : \n");
    scanf("%s",sen);
    i=strlen(sen);
    char temp1[i];

    for(j=0;j<=i-1;j++)
    {
        sen[j]=toupper(sen[j]);
        for(k=0;k<26;k++)
        {
            if(sen[j]==letters[k][0])
            {
                temp1[j]=letters[k][1];
            }
        }
    }
    for(j=0;j<=i-1;j++)
    printf("%c",temp1[j]);

    return 0;
}