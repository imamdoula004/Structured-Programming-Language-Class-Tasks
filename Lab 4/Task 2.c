int main ()
{
    int x;
    printf("Please type in the salary: \n");
    scanf("%d", &x);

    if(x<30000)
    {int a =((.04)*x);
    printf("%d",a);}
    else if(x>=30000 && x<=70000)
    {int b =((.10)*x);
    printf("%d",b);}
    else if(x>70000)
    {int c =(.15*x);
    printf("%d",c);}

    return 0;
}
