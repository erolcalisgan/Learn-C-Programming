// Declare two separate structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*way-1*/
typedef struct {
	int day=10;
	int month=1;
	int year=1980;
}Date;

typedef struct
{
	char ename[20];
	int ssn;
	float salary;
	 Date doj; 
}Employee;

/*way-2*/
struct Empl
{
	char ename[20];
	int ssn;
	float salary;
	struct Date
	{
		int date;
		int month;
		int year;
	}doj;
};

int main()
{

	Employee emp1 ;
	printf(" way1");
	printf("\nAccessing Month Field :%d",	emp1.doj.month);
	printf("\nAccessing day Field :%d",		emp1.doj.day);
	printf("\nAccessing year Field  :%d",	emp1.doj.year);

	struct Empl emp;
	emp.doj.date=1;
	emp.doj.month = 1;
	emp.doj.year = 2010;
	printf("\n");
	printf(" way2");
	printf("\nAccessing Month Field :%d", emp.doj.month);
	printf("\nAccessing day Field :%d", emp.doj.date);
	printf("\nAccessing year Field  :%d", emp.doj.year);
	printf("\n");


    return 0;
}

