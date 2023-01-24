#include<stdio.h>
#include<string.h>
#include<ctype.h>

 char letters1[26]=
{
    'A','B','C','D','E','F','G',
    'H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U',
    'V','W','X','Y','Z'
};
 float letters2[26]=
{
    '0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0',
    '0','0','0','0','0'
};

 char order1[26]=
{
    'A','B','C','D','E','F','G',
    'H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U',
    'V','W','X','Y','Z'
};
 float order2[26]=
{
    8.496,2.072,4.538,3.384,11.160,1.812,2.470,
    3.003,7.544,0.196,1.101,5.489,3.012,6.654,
    7.163,3.167,0.196,7.580,5.735,6.950,3.630,
    1.007,1.289,0.290,1.777,0.2722
};

int main()
{
    int i,j,k,check,space;
    float temp;
    char sen[1000];
    printf("Enter a ciphered string :\n");
    scanf("%[^\n]s", sen);
    i=strlen(sen);
    char temp1[i];

    for(j=0;j<=i-1;j++)
    {
            sen[j]=toupper(sen[j]);
            check=1;
            for(k=0;k<26;k++)
            {
                if(sen[j]==letters1[k])
                {
                    letters2[k]++;
                    check=0;
                    break;
                }
            }
    }
     for(k=0;k<=26;k++)
     {
     letters2[k]=(letters2[k]/i)*100;
     }

    for(j=0;j<26;j++)  
    for(k=0;k<j;k++)
    if(letters2[k]<letters2[k+1])
    {
        temp=letters2[k];
        letters2[k]=letters2[k+1];
        letters2[k+1]=temp;
        temp=letters1[k];
        letters1[k]=letters1[k+1];
        letters1[k+1]=temp;
    }

  for(j=0;j<26;j++)  
  for(k=0;k<j;k++)
    if(order2[k]<order2[k+1])
    {
        temp=order2[k];
        order2[k]=order2[k+1];
        order2[k+1]=temp;
        temp=order1[k];
        order1[k]=order1[k+1];
        order1[k+1]=temp;
    }

    for(j=0;j<=i-1;j++)
    {   
        space=isspace(sen[j]);
        if(space==0)
        {
        sen[j]=toupper(sen[j]);
        check=1;
        for(k=0;k<26;k++)
        {
            if(sen[j]==letters1[k])
            {
                temp1[j]=order1[k];
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