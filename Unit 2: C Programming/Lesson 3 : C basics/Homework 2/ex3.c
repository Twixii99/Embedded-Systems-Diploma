#include <stdio.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);

	// method 1
	float max_number_1 = a;
	if (max_number_1 < b)
		max_number_1 = b;
	if (max_number_1 < c)
		max_number_1 = c;
	printf("method 1 : Largest number = %g\n", max_number_1);

	// method 2
	float max_number_2 = a > b ? a : b;
	max_number_2 = max_number_2 > c ? max_number_2 : c;
	printf("method 2 : Largest number = %g\n", max_number_2);

	// method 3
	printf("method 3 : Largest number = %g\n", a > b ? a > c ? a : c : b > c ? b
																																					 : c);
}