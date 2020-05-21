#include <stdio.h>

double getArea(double);
double getCircum(double);

double PI = 3.14;
int gi;

int main(void)

{

	double r = 5.87;

	const double PI = 3.141592;

	printf("면적: %.2f\n", getArea(r));
	printf("둘레1: %.2f\n", 2 * PI*r);
	printf("둘레2: %.2f\n", getCircum(r));
	printf("PI: %.2f\n", PI);
	printf("gi: %.2f\n", gi);

	return 0;
}

double getArea(double r)
{
	return r * r * PI;
}