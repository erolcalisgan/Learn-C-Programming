// Way1 Using Sizeof Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct b1 {
	char bname[30];
	int ssn;
	int pages;
}book;

book b1 = { "Let Us C",1000,90 };

int main()
{
	book b2;
	printf("\nSize of Structure : %d", sizeof(b1));
	printf("\nSize of Structure : %d", sizeof(b2));
	return(0);
}
//Size of Structure : 40
//Size of Structure : 40
