
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	char line[101];

	printf("입력을 종료하려면 새로운 행에서 (ctrl + Z)를 누르십시오.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}