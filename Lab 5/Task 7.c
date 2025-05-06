int main()
{
    int x, min, second_min;
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
        for(int j=1; j<x; j++)
        {
            if(a[i]<a[j])
            {
                min=a[i];
            }
        }
    }

    for(int i=0; i<x; i++)
    {
        if(a[i]<min)
            {
                second_min=a[i];
            }
    }

    printf("Min=%d, 2nd Min=%d", min, second_min);
    return 0;
}
