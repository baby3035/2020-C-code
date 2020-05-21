
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)

{
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", strcpy(dest, source));

	printf("%s\n", strncpy(dest, "C#", 2));

	printf("%s\n", strncpy(dest, "C#", 3));

	return 0;
}