#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int numGenerator;
	for (int i = 1; i <= 100; i++)
	{
		numGenerator = rand() % 10 + 1;
		// numGenerator = rand() % Max + Min;
		// OR
		//numGenerator = rand() % (Max - Min + 1) + Min;
		printf("%d\t", numGenerator);
		if (i % 10 == 0)
			printf('\n');
	}

	return 0;
}