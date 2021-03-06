// 7.7.2. Passing arrays and individual.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main()
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int i;

	printf("Effects of passing entire array by reference:\n\nThe "
		"values of the original array are:\n");

	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}

	printf("\n");

	modifyArray(a, SIZE);

	printf("The values of the modified array are:\n");

	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}

	printf("\n\n\nEffects of passing array element "
		"by value:\n\nThe value of a[3] is %d\n", a[3]);

	modifyElement(a[3]);

	printf("The value of a[ 3 ] is %d\n", a[3]);

	return 0;

}

void modifyArray(int b[], int size)
{
	int j;

	for (j = 0; j < size; j++) {
		b[j] *= 2;
	}

}

void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}
//Effects of passing entire array by reference :
//
//The values of the original array are :
//	0  1  2  3  4
//	The values of the modified array are :
//	0  2  4  6  8
//
//
//	Effects of passing array element by value :
//
//The value of a[3] is 6
//Value in modifyElement is 12
//The value of a[3] is 6