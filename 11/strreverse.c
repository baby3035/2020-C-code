#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(void)

{
	char s[50];
	memcpy(s, "C Programming!", strlen("C Programming") + 1);
	printf("%s\n", s);

	reverse(s);
	printf("%s\n", s);

	return 0;
}

void reverse(char str[])
{
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}