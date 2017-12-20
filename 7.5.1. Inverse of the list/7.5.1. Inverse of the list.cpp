// 7.5.1. Inverse of the list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void read(int *, int);
void dis(int *, int);
void inverse(int *, int);

int main()
{
	int a[5], i;

	read(a, 5);
	dis(a, 5);
	inverse(a, 5);
	dis(a, 5);
	_getch();

	return 0;
}



void read(int c[], int i)
{
	int j;
	printf("Enter the list \n");
	for (j = 0; j < i; j++)
		scanf("%d", &c[j]);
	fflush(stdin);
}
void dis(int d[], int i)
{
	int j;
	printf("The list is \n");
	for (j = 0; j < i; j++)
		printf("%d ", d[j]);
	printf("\n");
}
void inverse(int inver_a[], int j)
{
	int i, temp;
	j--;
	for (i = 0; i < (j / 2); i++)
	{
		temp = inver_a[i];
		inver_a[i] = inver_a[j];
		inver_a[j] = temp;
		j--;
	}
}

//Enter the list
//1
//2
//3
//4
//5
//The list is
//1 2 3 4 5
//The list is
//5 2 3 4 1
