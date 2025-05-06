#include <stdio.h>

int main ()
{
	int w;
	printf("Please enter the total time elapsed in seconds since an event: \n");
	scanf("%d", &w);
	int x, y, z;

	x = w/3600;
	y = w/60;
	z = w%60;

	printf("%d : %d : %d", x, y, z);
	return 0;
}
