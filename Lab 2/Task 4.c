#include <stdio.h>

int main ()
{
	int n;
	float h, s;
	printf("Please enter the employee number, his/her worked hours in a month and the amount he/she received per hour: \n");
	scanf("%d%f%f", &n, &h, &s);

	s = h*s;

	printf("Employee %d receives $%.2f\n", n, s);
	return 0;
}
