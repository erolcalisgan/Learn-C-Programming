// Way1 Using Sizeof Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct b1 {
	char bname[30];
	int ssn;
	int pages;
}book;

book b1 = { "Let Us C",1000,90 };


struct variable
{
	int a1, a2;
	char s1;
	int *ptr;
	int arr[5];
};


int main()
{
	

	////way-1
	//printf("\nWay1: Using Sizeof Operator");
	//book b2;
	//printf("\nSize of Structure : %d",			sizeof(b1));
	//printf("\nSize of Structure : %d",			sizeof(b2));
	//printf("\nSize of bname in Structure : %d", sizeof(b2.bname));
	//printf("\nSize of ssn in Structure : %d",	sizeof(b2.ssn));
	//printf("\nSize of pages in Structure : %d", sizeof(b2.pages));
	//int total;
	//total = sizeof(b2.bname) + sizeof(b2.ssn) + sizeof(b2.pages);
	//printf("\nTotal size : %d", total);


	//way-2
	printf("\nWay2: Without Using Sizeof Operator");
	struct variable a[2];
	int start, last;
	start = (int)&a[1].a1;
	last =(int) &a[0].a1;
	printf("\nSize of Structure : %d Bytes", start - last);

	return(0);
}
//Size of Structure : 40
//Size of Structure : 40
