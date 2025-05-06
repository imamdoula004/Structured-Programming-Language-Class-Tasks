int main()
{
    int size, new_size=0;
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
        if (a[i]%2==0)
        {
            b[new_size++]=a[i];
        }
    }
    printf("New Array Size: %d\n", new_size);
    printf("New Array: ");


    for (int i=0; i<new_size; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
