#include <stdio.h>

int total = 10000;

void save(int);

void withdraw(int);

int main(void)
{
	printf(" 입금액 출금액 총입금액 총출금액	잔고\n");
	printf("====================================================\n");
	printf("%46d\n", total);
	save(50000);

	withdraw(30000);
	save(60000);
	withdraw(20000);
	printf("====================================================\n");

	return 0;
}

void save(int money)
{
	static int amount;
	total += money;
	amount += money;
	printf("%7d %17d %20d\n", money, amount, total);

}

void withdraw(int money)
{

	static int amount;
	total -= money;
	amount += money;

	printf("%15d %20d %9d\n", money, amount, total);
}