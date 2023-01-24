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
    int i,j,k,check,space;
    char sen[1000];
    printf("Enter your sentence : \n");
   scanf("%[^\n]s", sen);
    i=strlen(sen);
    char temp1[i];

    for(j=0;j<=i-1;j++)
    {   
        space=isspace(sen[j]);
        if(space==0)
        {
        sen[j]=toupper(sen[j]);
        check=1;
        for(k=0;k<26;k++)
        {
            if(sen[j]==letters[k][0])
            {
                temp1[j]=letters[k][1];
                check=0;
                break;
            }
        }
        if(check==1)
            temp1[j]=sen[j];
        }
        else
        temp1[j]=' ';
    }
    printf("%s",temp1);

    return 0;
}