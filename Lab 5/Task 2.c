int main ()
{
    int x;
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
        if(a[i]%2==0)
        {
            a[i]+=2;
        }
        else
        {
            a[i]+=3;
        }
    }

    for(int i=0; i<x; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
