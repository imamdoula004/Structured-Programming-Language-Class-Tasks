int main()
{
    int x;
    printf("Please type in a number: \n");
    scanf("%d", &x);

    if(x>=0 && x<=9)
    {
        printf("Number of digits = 1");
    }
    else if(x>=10 && x<=99)
    {
        printf("Number of digits = 2");
    }
    else if(x>=100 && x<=999)
    {
        printf("Number of digits = 3");
    }
    else if(x>=1000 && x<=9999)
    {
        printf("Number of digits = 4");
    }
    else if(x>=10000 && x<=99999)
    {
        printf("Number of digits = 5");
    }

    return 0;
}
