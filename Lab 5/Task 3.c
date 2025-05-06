int main ()
{
    int x, count=0;
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
        if(a[i]<0)
        {
            count++;
        }
    }

    printf("Output: %d", count);

    return 0;
}
