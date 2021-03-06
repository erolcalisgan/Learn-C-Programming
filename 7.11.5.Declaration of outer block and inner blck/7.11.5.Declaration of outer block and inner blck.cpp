// 7.11.5.Declaration of outer block and inner blck.cpp : Defines the entry point for the console application.
//7.11.5.	Declaration of outer block and inner block

#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	int count1 = 1;

	do
	{
		int count2 = 0;
		++count2;
		printf("\ncount1 = %d     count2 = %d", count1, count2);
	} while (++count1 <= 8);

	/* count2 no longer exists */

	printf("\ncount1 = %d\n", count1);
	return 0;
}
//count1 = 1     count2 = 1
//count1 = 2     count2 = 1
//count1 = 3     count2 = 1
//count1 = 4     count2 = 1
//count1 = 5     count2 = 1
//count1 = 6     count2 = 1
//count1 = 7     count2 = 1
//count1 = 8     count2 = 1
//count1 = 9