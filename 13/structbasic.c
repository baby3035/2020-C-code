#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct  account
{
	char name[12];
	int actnum;
	double balance;
};

int main(void)

{

	struct account mine = { "ȫ�浿", 1001, 300000 };
	struct account yours;
	strcpy(yours.name, "�̵���");

	yours.actnum = 1002;
	yours.balance = 500000;

	printf("����üũ��: %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);


	return 0;
}