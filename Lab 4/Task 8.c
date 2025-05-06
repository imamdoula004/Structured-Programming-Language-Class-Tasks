int main()
{
    int x;
    printf("Please type in the wind speed in knots: \n");
    scanf("%d", &x);

    if(x<1)
    {
        printf("Calm");
    }
    else if(x>=1 && x<=3)
    {
        printf("Light air");
    }
    else if(x>=4 && x<=27)
    {
        printf("Breeze");
    }
    else if(x>=28 && x<=47)
    {
        printf("Gale");
    }
    else if(x>=48 && x<=63)
    {
        printf("Storm");
    }
    else if(x>63)
    {
        printf("Hurricane");
    }
    return 0;
}
