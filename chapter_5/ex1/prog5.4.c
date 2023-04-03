// Program to determine if a year is a leap year

#include <stdio.h>
 int main (void)
 {
    int rem4, rem100, rem400, year;

    printf("Enter your Year: ");
    scanf("%i", &year);

    rem4 = year % 4;
    rem100 = year % 100;
    rem400 = year % 400;

    if ( rem4 == 0 && rem400 ==0 || rem100 != 0 )
    printf("It's a leap year\n");

    else
    printf("It's not a leap year\n");

    return 0;
 }