// 7.8.1.The name of an array is the same as &array[ 0 ].cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	char array[5];

	printf("    array = %p\n"
		"&array[0] = %p\n"
		"   &array = %p\n",
		array, &array[0], &array);

	return 0;

}
//array = 9a37b
//&array[0] = 9a37b
//&array = 9a37b