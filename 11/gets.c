
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	char line[101];

	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (ctrl + Z)�� �����ʽÿ�.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}