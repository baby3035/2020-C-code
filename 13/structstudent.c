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
	struct student hong = { 2018, "��ǻ���������а�", "ȫ�浿" };
	struct student na = { 20180002 };
	struct student bae = { 20180003 };

	scanf("%s", na.name);

	na.dept = "��ǻ���������а�";
	bae.dept = "�����а�";
	memcpy(bae.name, "���", 7);
	strcpy(bae.name, "���");
	strcpy_s(bae.name, 7, "���");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;
	if (one.snum == bae.snum)
		printf("�й��� %d���� �����մϴ�.\n", one.snum);

	if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))
		printf("������ ���� ����ü�Դϴ�\n");

	return 0;

}