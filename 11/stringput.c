
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20], dept[30];

	printf("%s", "�а� �Է� >> ");
	scanf("%s", dept);
	printf("%s", "�̸� �Է� >> ");
	scanf("%s", dept);
	printf("���: %10s %10s\n", dept, name);

	return 0;

}