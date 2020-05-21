#include <stdio.h>

union data
{
	char ch;
	int cnt;
	double real;

} data1;

int main(void)
{
	union data data2 = { 'A' };

	union data data3 = data2;

	printf("%d %d\n", sizeof(union data), sizeof(data3));

	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}