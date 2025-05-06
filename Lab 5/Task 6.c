int main()
{
    int x, lastcount;
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
        for(int j=0; j<x; j++)
        {
            if(a[i]==a[j])
            {
                lastcount = j;
            }
        }
    }
    printf("%d", lastcount);

    return 0;
}
