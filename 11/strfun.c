#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)

{
	char str[] = "JAVA2017 go c#";
	printf("%d\n", strlen("java"));
	printf("%s, ", _strlwr(str));
	printf("%s\n", _strupr(str));

	printf("%s, ", strstr(str, "VA"));

	printf("%s\n", strchar(str, 'A'));

	return 0;
}