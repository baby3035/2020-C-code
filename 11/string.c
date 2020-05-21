
#include <stdio.h>

int main(void)
{
	char c[] = "C C++ Java";
	// C C++ Java 출력
	printf("%s\n", c);
	c[5] = '\0';
	//C C++ 와 Java가 출력 됨
	printf("%s\n%s\n", c, (c + 6));

	c[5] = ' ';
	char* p = c;
	while (*p)
		//p가 가리키는 문자열을 출력 (c 출력)
		printf("%c", *p++);
	printf("\n");

	return 0;
}