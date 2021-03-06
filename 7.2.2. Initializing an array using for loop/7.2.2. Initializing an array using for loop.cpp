// 7.2.2. Initializing an array using for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n[10];
	int i;

	/* initialize elements of array n to 0 */
	for (i = 0; i < 10; i++) {
		n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	for (i = 0; i < 10; i++) {
		printf("%7d%13d\n", i, n[i]);
	}

	return 0;
}

//Element        Value
//	0            0
//	1            0
//	2            0
//	3            0
//	4            0
//	5            0
//	6            0
//	7            0
//	8            0
//	9            0

