#include <stdio.h>

int main(void)

{
	union data
	{
		char ch;
		int cnt;
		double real;
	};

	typedef union data udata;

	udata value, * p;

	p = &value;
	p->ch = 'a';
	printf("%c %c\n", p->ch, (*p).ch);
	p->cnt = 100;
	printf("%d ", p->cnt);
	p->real = 3.14;
	printf("%.2f\n", p->real);

	return 0;
}