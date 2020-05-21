#include <stdio.h>

void infunction(void);
void outfunction(void);

int global = 10;

static int sglobal = 20;

int main(void)
{
	auto int x = 100;

	printf("%d, %d %d\n", global, sglobal, x);
	infunction(); outfunction();
	infunction(); outfunction();
	infunction(); outfunction();
	printf("%d, %d %d\n", global, sglobal, x);

	return 0;
}

void infunction(void)
{
	auto int fa = 1;

	static int fs;

	printf("\t%d, %d, %d, %d\n", ++global, ++sglobal, fa, ++fs);
}