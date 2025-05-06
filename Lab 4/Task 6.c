int main()
{
    int hours, mins;

    printf("Please type in the time in a 24-hour format: \n");
    scanf("%d %d", &hours, &mins);

    if(hours<0 || hours>=24 || mins<0 || mins >=60)
    {
        printf("Wrong format. Please enter the correct format: \n");
    }
    else if(hours == 0)
    {
        printf("The time in 12 hour format is: 12:%02d\n", mins);
    }
    else if(hours>0 && hours<=12)
    {
        printf("The time in 12 hour format is: %02d:%02d\n", hours, mins);
    }
    else if(hours>12 && hours<24)
    {
        hours = hours-12;
        printf("The time in 12 hour format is: %02d:%02d\n",hours , mins);
    }
    return 0;
}
