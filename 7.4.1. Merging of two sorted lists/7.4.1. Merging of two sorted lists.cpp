// 7.4.1. Merging of two sorted lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void sort(int *, int);
void merge(int *, int *, int *, int);

void main() {
	int a[5], b[5], c[10];
	a[0] = 2;
	a[1] = 3;
	a[2] = 6;
	a[3] = 1;
	a[4] = 8;

	b[0] = 0;
	b[1] = 2;
	b[2] = 8;
	b[3] = 7;
	b[4] = 5;

	sort(a, 5);
	printf("The sorted list a is:\n");
	int j;
	for (j = 0; j<5; j++)
		printf("%d \n", a[j]);


	sort(b, 5);
	printf("The sorted list b is:\n");
	for (j = 0; j<5; j++)
		printf("%d \n", b[j]);

	merge(a, b, c, 5);
	printf("The elements of merged list are \n");

	for (j = 0; j<10; j++)
		printf("%d \n", c[j]);
}



void sort(int arr[], int k)
{
	int temp;
	int i, j;
	for (i = 0; i<k; i++) {
		for (j = 0; j<k - i - 1; j++) {
			if (arr[j]<arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void merge(int a[], int b[], int c[], int k) {
	int indexA = 0, indexB = 0, indexC = 0;
	while (indexA<k && indexB<k) {
		if (a[indexA] < b[indexB]) {
			c[indexC] = a[indexA];
			indexA++;
		}
		else {
			c[indexC] = b[indexB];
			indexB++;
		}
		indexC++;
	}
	while (indexA<k)
	{
		c[indexC] = a[indexA];
		indexA++; indexC++;
	}
	while (indexB<k)
	{
		c[indexC] = b[indexB];
		indexB++;  indexC++;
	}
}