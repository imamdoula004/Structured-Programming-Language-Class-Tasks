#include <stdio.h>
int main ()
{
	float u, a, t;
	printf("Please enter the initial velocity, acceleration and the time that has elapsed of an object: \n");
	scanf("%f%f%f", &u, &a, &t);

	float v = u+a*t;
	float s = u*t+0.5*a*t*t;

	printf("v = %.2f\n", v);
	printf("s = %.2f\n", s);
	return 0;
}
