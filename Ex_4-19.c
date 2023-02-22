#include<stdio.h>
int main()
{
    int day, month, year, leap;
    printf("Enter day, month and year: ");
    scanf("%d%d%d", &day, &month, &year);
    if(month<1 || month>12)
    {
        printf("\nInvalid month!");
    }
    else if (day<1 || day>31)
    {
        printf("\nInvalid day!");
    }
    else if ((month==4 || month==6 || month==9 || month==11) && day==31)
    {
        printf("\nInvalid date for this month!");
    }
    else if (month==2 && day>29)
    {
        printf("\nInvalid date for this month!");
    }
    
    else if (month==2 && day<30)
    {
        leap = year%4 && (leap%100 || leap%400);
        if (year!=0 && day==29)
        {
            printf("\nInvalid date for this year!");
        } 
    }
    else
    printf("\nValid Date");
    return 0;
    
    
}