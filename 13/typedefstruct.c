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

	software vs = { "비주얼스튜디오 커뮤니티", "MS", "통합개발환경",{2018, 8, 29} };

	printf("제품명: %s\n", vs.title);
	printf("회사: %s\n", vs.company);
	printf("종류: %s\n", vs.kinds);
	printf("출시일: %d. %d. %d\n", vs.release.year, vs.release.month,
		vs.release.day);

	return 0;
}