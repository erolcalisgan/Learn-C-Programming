// 7.1.2. Address of each element in an array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	int a[5];
	int i;
	for (i = 0; i<5; i++)
	{
		a[i] = i;
	}

	for (i = 0; i<5; i++)
	{
		printf("value in array %d\n", a[i]);
	}

	for (i = 0; i<5; i++)
	{
		printf("value in array %d and address is %16lu\n", a[i], &a[i]);
	}


    return 0;
}


//Output:
//value in array 0
//value in array 1
//value in array 2
//value in array 3
//value in array 4
//value in array 0 and address is           631656
//value in array 1 and address is           631660
//value in array 2 and address is           631664
//value in array 3 and address is           631668
//value in array 4 and address is           631672

