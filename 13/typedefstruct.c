#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

typedef struct date date;

int main(void)
{

	typedef struct
	{
		char title[30];
		char company[30];
		char kinds[30];
		date release;
	}software;

	software vs = { "���־�Ʃ��� Ŀ�´�Ƽ", "MS", "���հ���ȯ��",{2018, 8, 29} };

	printf("��ǰ��: %s\n", vs.title);
	printf("ȸ��: %s\n", vs.company);
	printf("����: %s\n", vs.kinds);
	printf("�����: %d. %d. %d\n", vs.release.year, vs.release.month,
		vs.release.day);

	return 0;
}