#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter Your Name;");
    scanf("%[^\n]s",name);

    if(strlen(name))
    printf("HELLO, %s",name);

    else 
    printf("HELLO, SJEC");
    return 0;

}