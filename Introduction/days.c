#include<stdio.h>
#include<stdlib.h>
int main()
{
	int totaldays=1329,totalremdays=0,year=0,weeks=0,days=0,months=0;
	year=totaldays/365;
	printf("\nyears: %d",year);
	totalremdays=totaldays-year*365;
	weeks=totalremdays/7;
	printf("\nWeeks: %d",weeks);
	days=totalremdays-weeks*7;
	printf("\nDays: %d",days);
    return 0;
}
