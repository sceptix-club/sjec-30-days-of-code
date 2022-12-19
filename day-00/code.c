#include <stdio.h>
#include <string.h>

    int main()
    
        {
            char name[200];
            printf("Name: ");
            scanf("%[^\n]s", name);

            if (strlen(name))
                printf("Hello, %s!", name);
            else
                printf("Hello,SJEC!");

            return 0;    
                
        }