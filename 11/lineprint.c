#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)

{
	char s[100];

	gets(s);

	char* p = s;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;
}