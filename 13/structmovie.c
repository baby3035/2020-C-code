#include <stdio.h>
#include <string.h>

int main(void)

{

	typedef struct movie
	{
		char* title;
		int attendance;
		char director[20];
	}movie;
	
	movie box[] = { {"¸í·®", 17613000,"±èÇÑ¹Î"}, {"±¹Á¦½ÃÀå", 14267000,"À±Á¦±Õ"}, {"º£Å×¶û",13383000} };

	strcpy(box[2].director, "·ù½Â¿Ï");

	printf("	Á¦¸ñ	°¨µ¶	°ü°´¼ö\n");
	printf("================================\n");
	for (int i = 0; i < 3; i++)
		printf("[%8s] %6s %d\n", box[i].attendance);

	return 0;
}