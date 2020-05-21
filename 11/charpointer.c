#include <stdio.h>

int main(void)
{
	char* java = "java";
	printf("%s ", java);

	int i = 0;
	while (java[i])
		printf("%c", java[i++]);
	printf(" ");

	i = 0;
	while (*(java + i) != '\0')
		printf("%c", *(java + i++));
	printf("\n");

	java[0] = 'J';

	return 0;
}