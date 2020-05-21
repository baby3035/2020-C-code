#include <stdio.h>

void outfunction()
{
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);
}