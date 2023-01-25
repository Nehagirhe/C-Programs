//C Program To Convert Specific Days Into Years,Months And Weeks.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int totaldays=1329,totalremdays=0,year=0,weeks=0,days=0,months=0;
	year=totaldays/365;
	printf("\nyears: %d",year);
	totalremdays=totaldays-year*365;     //1329-3*365=234
	weeks=totalremdays/7;                //234/7=33
	printf("\nWeeks: %d",weeks);      
	days=totalremdays-weeks*7;           //234-33*7=3
	printf("\nDays: %d",days);
    return 0;
}
