int main ()
{
    int x, positive_count=0, negative_count=0, neutral_count=0;
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
        if(a[i]>0)
        {
            positive_count++;
        }
        else if(a[i]<0)
        {
            negative_count++;
        }
        else if(a[i]=0)
        {
            neutral_count++;
        }
    }


    if(positive_count > negative_count && positive_count > neutral_count)
    {
        printf("Major Positive\n");
    }
    else if(negative_count > positive_count && negative_count > neutral_count)
    {
        printf("Major Negative\n");
    }
    else if(positive_count = negative_count && neutral_count > positive_count && neutral_count > negative_count)
    {
        printf("Neutral\n");
    }

    return 0;
}
