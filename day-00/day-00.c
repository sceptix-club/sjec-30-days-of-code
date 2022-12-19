#include<stdio.h>

int main()
{
	char name[20];
	printf("Name:");
	gets(name);
	if(name[0]=='\0')
		puts("Hello, SJEC!");
	else
		printf("Hello, %s\n",name);
	return 0;
}
