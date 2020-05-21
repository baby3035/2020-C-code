#include <stdio.h>


int main(void)

{
	typedef struct movie
	{
		char* title;
		int attendance;
	}movie;

	movie assassination;
	
	assassination.title = "¾Ï»ì";
	assassination.attendance = 12700000;

	printf("[%s] °ü°´¼ö: %d\n", assassination.title, assassination.attendance);

	return 0;
}