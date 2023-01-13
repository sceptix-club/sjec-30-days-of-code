#include<stdio.h>
#include<string.h>
#include<ctype.h>

 float letters[26][2]=
{
    {'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0},
    {'H',0},{'I',0},{'J',0},{'K',0},{'L',0},{'M',0},{'N',0},
    {'O',0},{'P',0},{'Q',0},{'R',0},{'S',0},{'T',0},{'U',0},
    {'V',0},{'W',0},{'X',0},{'Y',0},{'Z',0}
};
 float order[26][2]=
{
    {'A',8.496},{'B',2.072},{'C',4.538},{'D',3.384},{'E',11.160},{'F',1.812},{'G',2.470},
    {'H',3.003},{'I',7.544},{'J',0.196},{'K',1.101},{'L',5.489},{'M',3.012},{'N',6.654},
    {'O',7.163},{'P',3.167},{'Q',0.196},{'R',7.580},{'S',5.735},{'T',6.950},{'U',3.630},
    {'V',1.007},{'W',1.289},{'X',0.290},{'Y',1.777},{'Z',0.2722}
};

int main()
{
    int i,j,k,check,space;
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
                if(sen[j]==letters[k][0])
                {
                    letters[k][1]++;
                    check=0;
                    break;
                }
            }
    }
     for(k=0;k<=26;k++)
     {
     letters[k][1]=(letters[k][1]/i)*100;
     printf("%f \n",letters[k][1]);
     }
 return 0;
}