#include<stdio.h>
#include<string.h>
int val(char c)
{
    int x=0;
    switch(c)
    {
         case 'I':
                 x=1;
                break;
         case 'i':
                 x=1;
                break;
         case 'V': 
                 x=5; 
                 break;
        case 'v': 
                 x=5; 
                 break;
         case 'X': 
                 x=10; 
                  break;
         case 'x': 
                 x=10; 
                  break;         
         case 'L':
                 x=50; 
                 break;
         case 'l':
                 x=50; 
                 break;    
         case 'C': 
                 x=100; 
                break;
        case 'c': 
                 x=100; 
                break;
         case 'D': 
                 x=500; 
                 break;
        case 'd': 
                 x=500; 
                 break;
         case 'M': 
                x=1000; 
                break;
        case 'm': 
                x=1000; 
                break;
         case '\0': 
                 x=0; 
                 break;
         default: 
                 x=-1; 
    }
    return x;
}
int main()
{
    char roman[1000];
    int i=0,n=0;
    printf("Enter any roman number:\n");
    scanf("%s",roman);

    while(roman[i])
    {
         if(val(roman[i])<0)
         {
             printf("wrong roman number");
             return 0;
         }
         if((strlen(roman)-i)>2)
         {
             if(val(roman[i])<val(roman[i+2]))
             {
                 printf("wrong roman number");
                 return 0;
             }
         }
         if(val(roman[i])>=val(roman[i+1]))
             n=n+val(roman[i]);
         else
         {
             n=n+(val(roman[i+1])-val(roman[i]));
             i++;
         }
         i++;
    }
    printf("%d",n);
    return 0;
}
