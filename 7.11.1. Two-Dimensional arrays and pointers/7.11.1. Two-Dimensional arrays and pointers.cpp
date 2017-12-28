// 7.11.1. Two-Dimensional arrays and pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	char board[3][3] = {
		{ '1','2','3' },
	{ '4','5','6' },
	{ '7','8','9' }
	};

	printf("address of board        : %p\n", board);
	printf("address of board[0][0]  : %p\n", &board[0][0]);
	printf("but what is in board[0] : %p\n", board[0]);
	return 0;
}
//address of board : 9a377
//address of board[0][0] : 9a377
//but what is in board[0] : 9a377