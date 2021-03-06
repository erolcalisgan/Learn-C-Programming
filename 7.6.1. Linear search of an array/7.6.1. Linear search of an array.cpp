// 7.6.1. Linear search of an array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>


#define _CRT_SECURE_NO_WARNINGS


#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main()
{
	int a[SIZE];
	int x;
	int searchKey;
	int element;

	for (x = 0; x < SIZE; x++) {
		a[x] = 2 * x;
	}

	printf("Enter integer search key:\n");
	scanf("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1) {
		printf("Found value in element %d\n", element);
	}
	else {
		printf("Value not found\n");
	}

	return 0;

}

int linearSearch(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < size; ++n) 
	{
		if (array[n] == key) 
		{
			return n;
		}
	}
	return -1;

}
//Enter integer search key :
//2
//Found value in element 1