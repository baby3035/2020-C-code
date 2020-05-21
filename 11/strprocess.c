#include <stdio.h>

int main(void)

{
	char str1[] = "JAVA";
	char str2[] = "C#";
	char str3[] = "C++";

	char* pstr[] = {str1,str2,str3};

	printf("%s ", pstr[0]);
	printf("%s ", pstr[1]);
	printf("%s\n ", pstr[2]);

	printf("%c %c %c\n ", str1[0], str2[1], str3[2]);
	printf("%c %c %c\n ", pstr[0][1], pstr[1][1], pstr[2][1]);

	return 0;
}