#include <stdio.h>

int main()
{
    int a, x, y, z;
    printf("Please type in your input: \n");
    scanf("%d", &a);

    x = a/100; // leaves the hundreds quotient
    y = (a/10)%10; // leaves the tens quotient and then isolates the tens number
    z = a%10; // isolates the ones number

    printf("%d\t%d\t%d\n", x, y, z);
}
