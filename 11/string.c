
#include <stdio.h>

int main(void)
{
	char c[] = "C C++ Java";
	// C C++ Java ���
	printf("%s\n", c);
	c[5] = '\0';
	//C C++ �� Java�� ��� ��
	printf("%s\n%s\n", c, (c + 6));

	c[5] = ' ';
	char* p = c;
	while (*p)
		//p�� ����Ű�� ���ڿ��� ��� (c ���)
		printf("%c", *p++);
	printf("\n");

	return 0;
}