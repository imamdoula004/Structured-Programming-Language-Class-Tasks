int main()
{
    int day_1, month_1, year_1;
    int day_2, month_2, year_2;
    printf("Please type in the first date in day-month-year format: \n");
    scanf("%d %d %d", &day_1, &month_1, &year_1);
    printf("Please type in the second date in day-month-year format: \n");
    scanf("%d %d %d", &day_2, &month_2, &year_2);

    if(year_1>year_2 || (year_1 == year_2 && month_1 > month_2) || (year_1 == year_2 && month_1 == month_2 && day_1 > day_2))
    {
        printf("%02d-%02d-%04d is earlier than %02d-%02d-%04d\n", &day_2, &month_2, &year_2, &day_1, &month_1, year_1);
    }
    else if(year_1<year_2 || (year_1 == year_2 && month_1 < month_2) || (year_1 == year_2 && month_1 == month_2 && day_1 < day_2))
    {
        printf("%02d-%02d-%04d is earlier than %02d-%02d-%04d\n", &day_1, &month_1, &year_1, &day_2, &month_2, &year_2);
    }
    return 0;
}
