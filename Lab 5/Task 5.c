int main ()
{
    int x, sum=0, average=0;
    printf("Please type in the size of the array:\n");
    scanf("%d", &x);

    int a[x];
    printf("Please type in the elements inside the array serially:\n");
    for(int i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<x; i++)
    {
        sum+=a[i];
    }

    average = (sum/x);

    printf("Sum = %d, Ave = %.2f\n", sum, average);

    return 0;
}
