#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "https://www.visualstudio.com";
	char dst[50];

	printf("문자배열 src = %s\n", src);
	printf("문자열크기 strlen(src) = %d\n", strlen(src));
	memcpy(dst, src, strlen(src) + 1);
	printf("문자배열 dst = %s\n", dst);
	memcpy(src, "안녕하세요!", strlen("안녕하세요!") + 1);
	printf("문자배열 src = %s\n", src);

	char ch = ':';
	char* ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("문자 %c 뒤에는 문자열 %s 이 있다.\n", ch, ret);

	return 0;
}