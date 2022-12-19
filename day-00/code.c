#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter Your Name;");
    fgets(name, sizeof(name), stdin);
    puts(name);

    if(name[0]=='\n')
    printf("HELLO, SJEC");

    else 
    printf("HELLO, %s",name);
    return 0;

}
