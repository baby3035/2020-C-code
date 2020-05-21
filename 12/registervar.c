#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	register int sum = 0;

	int max;
	printf("양의 정수 입력 >> ");
	scanf("%d", &max);

	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("합: %d\n", sum);

	return 0;
}