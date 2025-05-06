#include <stdio.h>

int main ()
{
	float x, y;
	printf ("Please input two numbers: \n");
	scanf("%f%f", &x, &y);

	double sum = x+y;
	double product = x*y;
	double difference = x-y;
	double quotient = x/y;
	double remainder = fmod(x,y);

	printf("Sum = %.2f\n", sum);
	printf("Subtraction = %.2f\n", difference);
	printf("Multiplication = %.2f\n", product);
	printf("Division = %.2f\n", quotient);
	printf("Remainder = %.2f\n", remainder);
	return 0;
}
