#include <stdio.h>

int main(void)
{

	char ch = 'A';
	// A와 65 출력
	printf("%c %d\n", ch, ch);

	char java[] = { 'J', 'A', 'V', 'A', '\0' };
	//  JAVA 출력
	printf("%s\n", java);

	char c[] = "C language";
	// C language 출력
	printf("%s\n", c);

	char csharp[5] = "C#CC";

	//C#CC 출력 
	printf("%s\n", csharp);
	//#C 출력
	printf("%c%c\n", csharp[1], csharp[2]);

	return 0;
}