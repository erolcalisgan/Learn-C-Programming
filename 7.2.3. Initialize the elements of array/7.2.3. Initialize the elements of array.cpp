// 7.2.3. Initialize the elements of array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define SIZE 10

int main()
{
	int s[SIZE];
	int j;

	for (j = 0; j < SIZE; j++) {
		s[j] = 2 + 2 * j;
	}

	for (j = 0; j < SIZE; j++) {
		printf("%7d%13d\n", j, s[j]);
	}

	return 0;
}

//0            2
//1            4
//2            6
//3            8
//4           10
//5           12
//6           14
//7           16
//8           18
//9           20

