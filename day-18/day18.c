#include <stdio.h>
#include <string.h>
#include<ctype.h>
char getMaxOccurringChar(char* str)
{
    int count[256] = { 0 };
 
    float freq;
    int len = strlen(str);
    int max = 0; 
    char result; 
 
        for (int i = 0; i < len; i++) 
            count[toupper(str[i])]++;
            
            
        for(int j=0;j<5;j++){ 
            max=0;
            for(int i=0;i<len;i++){
            if (max < count[str[i]]) {
                max = count[str[i]];
                result = str[i];
            }
            }
          freq=(max/len)*100; 
        printf("%c:%d\n",result,freq);
        }
}
int main()
{
    char str[100];
    scanf("%[^\t]s", str);
    getMaxOccurringChar(str);
}