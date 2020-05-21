#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	struct student
	{
		int snum;
		char* dept;
		char name[12];
	};
	struct student hong = { 2018, "컴퓨터정보공학과", "홍길동" };
	struct student na = { 20180002 };
	struct student bae = { 20180003 };

	scanf("%s", na.name);

	na.dept = "컴퓨터정보공학과";
	bae.dept = "기계공학과";
	memcpy(bae.name, "배상문", 7);
	strcpy(bae.name, "배상문");
	strcpy_s(bae.name, 7, "배상문");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;
	if (one.snum == bae.snum)
		printf("학번이 %d으로 동일합니다.\n", one.snum);

	if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))
		printf("내용이 같은 구조체입니다\n");

	return 0;

}