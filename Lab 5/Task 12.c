int main()
{
    int size, non_zero=0;
    printf("Please type in the size of the array:\n");
    scanf("%d", &size);

    int a[size], b[size];

    printf("Please type in the elements inside the array serially:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<size; i++)
    {
        if (a[i]!=0)
        {
            b[non_zero++]=a[i];
        }
    }

    for (int i=non_zero; i<size; i++) {
        b[i] = 0;
    }

    printf("New Array: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
