#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	register int sum = 0;

	int max;
	printf("���� ���� �Է� >> ");
	scanf("%d", &max);

	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("��: %d\n", sum);

	return 0;
}