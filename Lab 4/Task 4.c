int main ()
{
    int x;
    printf("Please enter a postal code: \n");
    scanf("%d", &x);

    if(x == 1206)
    {
        printf("Dhaka Cantonment");
    }
    else if(x == 1209)
    {
        printf("Jigatala");
    }
    else if(x == 1213)
    {
        printf("Banani");
    }
    else if(x == 1212)
    {
        printf("Badda");
    }
    else if(x == 1236)
    {
        printf("Dhania");
    }
    else if(x == 1332)
    {
        printf("Narisha");
    }
    else if(x == 1310)
    {
        printf("Keraniganj");
    }
    else if(x == 1211)
    {
        printf("Lalbag");
    }
    else if(x == 1216)
    {
        printf("Mirpur");
    }
    else
    {
        printf("Could not find\n");
    }

    return 0;
}
