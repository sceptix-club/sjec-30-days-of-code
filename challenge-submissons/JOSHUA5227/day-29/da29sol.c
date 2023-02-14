#include<stdio.h>
#include<string.h>
#include<ctype.h>

char letters[26]=
{
    ['A'-'A']='.-',['B'-'A']='-...',['C'-'A']='-.-.',['D'-'A']='-..',['E'-'A']='.',['F'-'A']='..-.',['G'-'A']='--.',
    ['H'-'A']='....',['I'-'A']='..',['J'-'A']='.---',['K'-'A']='-.-',['L'-'A']='.-..',['M'-'A']='--',['N']='-.',
    ['O'-'A']='---',['P'-'A']='.--.',['Q'-'A']='--.-',['R'-'A']='.-.',['S'-'A']='...',['T'-'A']='-',['U']='..-',
    ['V'-'A']='...-',['W'-'A']='.--',['X'-'A']='-..-',['Y'-'A']='-.--',['Z'-'A']='--..'
};

int main()
{
    int i,j,k,check,space;
    char sen[1000];
    printf("Enter a ciphered string :\n");
    scanf("%[^\n]s", sen);
    i=strlen(sen);
    char temp1[i];
}