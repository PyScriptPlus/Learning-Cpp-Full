#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define SEED srand((unsigned)time(NULL))
#define GREEN "\033[32m"
#define WHITE "\033[0m"


int main() {

	SEED;

	// Inam mishe: 
	// srand((unsigned)time(0));

	unsigned int y;
	for (int i = 1; i <= 100; ++i)
	{
		y = rand() % 10 + 1;
		printf(GREEN);
		printf("%d \t", y);
		if (i % 10 == 0)
		{
			// %c baraye in gozashtam chon az in (\n) be onvan char estefade kardam
			// Bedon %c error mide warn ham mide: dalil?
			// Character ASCII sho mibine fek mikone daram int chap mikonam
			// Zaban C hast dige :)
			printf("%c",'\n'); 
		}

		if (i == 100) 
		{
			Sleep(500);
			system("cls");
		}
		i = (i == 100) ? 0 : i;
	}

	printf(WHITE);
	return 0;
}