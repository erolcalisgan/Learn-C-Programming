// 7.8.3.get array value through array pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <string.h>
#include "source.h"





int main(void)
{
	/*char multiple[] = "a string ex";*/
	char multiple[] = "1234567";
	char *p = multiple;
	int i;
	unsigned int size = strlen(multiple);
	for (i = 0; i<strlen(multiple); i++)
		printf("\nmultiple[%d] = %c  *(p+%d) = %c  &multiple[%d] = %p  p+%d = %p",
			i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
	return 0;
}
//The address of the first array element  : 9a372
//The address obtained from the array name : 9a372