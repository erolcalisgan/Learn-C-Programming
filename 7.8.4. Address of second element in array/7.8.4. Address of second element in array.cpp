// 7.8.4. Address of second element in array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


//	7.8.4.	Address of second element in array (value of arraypointer+1)
int main(void)
{
	char multiple[] = "another string";

	printf("\nAddress of second element: %p", &multiple[1]);
	printf("\nValue of multiple+1      : %p\n", multiple + 1);


	// http://www.cplusplus.com/doc/tutorial/pointers/

	/*cpp*/
	int numbers[5];
	int * p;
	p = numbers;  *p = 10;
	p++;  *p = 20;
	p = &numbers[2];
	*p = 30;
	p = numbers + 3;
	*p = 40;
	p = numbers;
	*(p + 4) = 50;
	for (int n = 0; n < 5; n++)
		cout << numbers[n] << ", ";

	return 0;
}
//Address of second element : 9a372
//Value of multiple + 1 : 9a372