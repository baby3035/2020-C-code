#include <stdio.h>
#include <conio.h>

int main(void)
{

	char ch;

	printf("���ڸ� ��� �Է��ϰ� ���͸� ������ >>\n");
	while ((ch = _getchar()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ���� ������ �ι� ��� >>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("���ڸ� ������ �� �� ��� >>\n");
	while ((ch = _getch()) != 'q')
		putchar(ch);
	printf("\n");

	return 0;

}