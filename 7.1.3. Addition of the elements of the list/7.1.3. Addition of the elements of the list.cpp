// 7.1.3. Addition of the elements of the list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[5], i = 5, sum = 0;

	printf("Enter the elements of list \n");
	int j;

	for (j = 0; j<i; j++)
		scanf("%d", &a[j]);


	fflush(stdin);
	printf("The list elements are \n");

	for (j = 0; j<i; j++)
		printf("%d ", a[j]);


	printf("\n");


	for (i = 0; i<5; i++)
	{
		sum += a[i];
	}
	printf("The sum of the elements of the list is %d\n", sum);

    return 0;
}

//Enter the elements of list
//1
//2
//3
//4
//5
//The list elements are
//1 2 3 4 5
//The sum of the elements of the list is 15

