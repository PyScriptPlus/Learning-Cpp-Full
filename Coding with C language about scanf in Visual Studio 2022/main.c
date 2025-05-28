#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	/*	
		Age khali benevisi injuri
		scanf("%d", &num1);
		Dar ba'azi az version ha Error mide
		Error:
			'scanf': This function or variable may be unsafe.
			Consider using scanf_s instead.
			To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
			See online help for details.
			Rah hal bala code ha macro benevisi:
			#define _CRT_SECURE_NO_WARNINGS 

			Ya bayad az scanf_s() estefade konim ke behtare
	*/
	int num1;
	printf("Enter your Number: ");
	scanf("%d", &num1);
	printf("%d\n", num1);
	// OR
	printf("Enter your Number2: ");
	int num2;
	scanf_s("%d", &num2);
	printf("%d", num2);

	system("pause");
	return 0;
}