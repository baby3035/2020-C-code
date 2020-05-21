#include <stdio.h>
#include <string.h>

int main(void)
{
	char* s1 = "java";
	char* s2 = "java";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));

	s1 = "java";
	s2 = "jav";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
	s1 = "jav";
	s2 = "java";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
	printf("strncmp(%s, %s, %d) = %d\n", s1, s2, 3, strncmp(s1, s2,3));

	return 0;

}