#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)

{
	char str1[] = "C and C++\t language are best!";
	char* delimiter = " ,\t!";

	printf("���ڿ� \" %s\"�� >>\n", str1);
	printf("������[%s]�� �̿��Ͽ� ����� ���� >>\n", delimiter);
	char* ptoken = strtok(str1, delimiter);

	while ( ptoken ! = NULL)
	{
	
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delimiter);

	}

	return 0;
}