#include <stdio.h>

static int svar;

int gvar;

void increment();
void testglobal();

int main(void)

{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);

	testglobal();
	printf("전역 변수: %d\n", gvar);

}

void increment()
{
	svar++;
}