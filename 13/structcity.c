#include <stdio.h>
#include <string.h>

struct position
{
	double latitude;
	double longitude;
};

int main(void)
{

	struct city
	{
		char* name;
		struct position place;
	};


	struct city seoul, newyork;

	seoul.name = "����";
	seoul.place.latitude = 37.33;
	seoul.place.longitude = 126.58;

	newyork.name = "����";
	newyork.place.latitude = 40.8;
	newyork.place.longitude = 73.9;

	printf("[%s] ����= %.1f �浵 = %.1f\n",
		seoul.name, seoul.place.longitude, seoul.place.latitude);
	printf("[%s] ����= %.1f �浵 = %.1f\n",
		newyork.name, newyork.place.longitude, newyork.place.latitude);

	return 0;

}