#include <stdio.h>

int main(void)
{

	char ch = 'A';
	// A�� 65 ���
	printf("%c %d\n", ch, ch);

	char java[] = { 'J', 'A', 'V', 'A', '\0' };
	//  JAVA ���
	printf("%s\n", java);

	char c[] = "C language";
	// C language ���
	printf("%s\n", c);

	char csharp[5] = "C#CC";

	//C#CC ��� 
	printf("%s\n", csharp);
	//#C ���
	printf("%c%c\n", csharp[1], csharp[2]);

	return 0;
}