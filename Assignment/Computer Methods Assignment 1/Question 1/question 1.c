#include <stdio.h>
void ReadDate(int, int, int);
void input(int *, int *, int *);
int main()
{
int Day, Month, Year;

input(&Month, &Day,&Year);
ReadDate(Month,Day,Year);
return 0;
}

void input(int *month, int *day, int *year)
{
printf("\nEnter a month =====> ");
scanf("%d", month);
printf("\nEnter the day =====> ");
scanf("%d", day);
printf("\nEnter the year =====> ");
scanf("%d", year);
}

void ReadDate (int month, int day, int year)
{
int leap =0;
int validDay=0, validMonth=1, validYear=0;
if ( year > 1993 && year<2014) validYear = 1;

switch ( month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12: if (day>0 && day <32) validDay =1; break;
case 2: { leap = (year % 4 ==0);
if (day == 29) validDay = leap;
else if (day>0 && day <28) validDay =1;
break;
}
case 4:
case 6:
case 9:
case 11: if (day>0 && day <31) validDay =1; break;
default: validMonth = 0;
}
if (validMonth && validDay && validYear)
printf("\n The date is ( %2d - %2d - %4d ) \n", month, day, year);
else printf("\n(%2d - %2d - %4d) is not a valid date\n", month, day, year);
}

