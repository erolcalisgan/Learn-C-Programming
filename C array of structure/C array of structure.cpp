// C array of structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

//gets_s(buf);
//fgets(buf, sizeof(buf), stdin);

struct Bookinfo
{
	char bname[20];
	int pages;
	int price;
};
struct Bookinfo book[3];

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i<3; i++)
	{
		printf("\nEnter the Name of Book    : ");
		fgets(book[i].bname);
		printf("\nEnter the Number of Pages : ");
		scanf("%d", book[i].pages);
		printf("\nEnter the Price of Book   : ");
		scanf("%f", book[i].price);
	}

	printf("\n--------- Book Details ------------ ");

	for (i = 0; i<3; i++)
	{
		printf("\nName of Book    : %s", book[i].bname);
		printf("\nNumber of Pages : %d", book[i].pages);
		printf("\nPrice of Book   : %f", book[i].price);
	}

	return 0;
}