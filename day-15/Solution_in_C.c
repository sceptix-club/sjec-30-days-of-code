#include <stdio.h>
#include <string.h>
int value(char r)
{
	if(r=='I')
        return 1;
	if(r=='V')
        return 5;
	if(r=='X')
	    return 10;
	if(r=='L')
		return 50;
	if(r=='C')
		return 100;
	if(r=='D')
		return 500;
	if(r=='M')
		return 1000;
	return -1;
}
int romantodecimal(char s[])
{
    int result=0;
	for (int i=0;i<strlen(s);i++)
	{
	    int s1=value(s[i]);
	    if(i+1<strlen(s))
		{
		    int s2=value(s[i+1]);
		    if(s1>=s2)
			{
				result=result+s1;
			}
			else
			{
				result=result+s2-s1;
				i++;
			}
		}
		else
        {
			result=result+s1;
		}
	}
	return result;
}
int main()
{
    char s[15];
	scanf("%s",&s);
	printf("%d",romantodecimal(s));
	return 0;
}
