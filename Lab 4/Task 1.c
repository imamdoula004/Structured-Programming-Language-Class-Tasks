int main ()
{
    int x;
    printf("Please type in an integer: \n");
    scanf("%d", &x);

    if(x%3==0 && x%5==0)
    {printf("Divisible by 3 and 5");}
    else if(x%3==0)
    {printf("Divisible by 3");}
    else if(x%5==0)
    {printf("Divisible by 5");}
    else if(x%3!=0 && x%5!=0)
    {printf("Not divisible by 3 or 5");}

    return 0;
}
