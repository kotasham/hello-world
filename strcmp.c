/*
 * Demo of string comparison.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80], str2[80];
	
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);

	if(strcmp(str1, str2) == 0)
	{
		printf("strings are same\n");
	}
	else
    {
		printf("strings are not same\n");
	}

    return 0;
}
