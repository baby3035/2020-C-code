#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "https://www.visualstudio.com";
	char dst[50];

	printf("���ڹ迭 src = %s\n", src);
	printf("���ڿ�ũ�� strlen(src) = %d\n", strlen(src));
	memcpy(dst, src, strlen(src) + 1);
	printf("���ڹ迭 dst = %s\n", dst);
	memcpy(src, "�ȳ��ϼ���!", strlen("�ȳ��ϼ���!") + 1);
	printf("���ڹ迭 src = %s\n", src);

	char ch = ':';
	char* ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("���� %c �ڿ��� ���ڿ� %s �� �ִ�.\n", ch, ret);

	return 0;
}