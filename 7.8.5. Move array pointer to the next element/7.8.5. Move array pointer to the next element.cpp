// 7.8.5. Move array pointer to the next element.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	char multiple[] = "another string";

	printf(" first element: %p\n", multiple);
	printf("second element: %p\n", multiple + 1);
	printf(" third element: %p\n", multiple + 2);
	return 0;
}
//first element : 9a371
//second element : 9a372
//third element : 9a373