// 9.2.1. Using the structure member and structure.cpp : Defines the entry point for the console application.
//9.2.1.	Using the structure member and structure pointer operators

#include "stdafx.h"
#include <stdio.h>

struct card {
	const char *face;
	const char *suit;
};

int main()
{
	struct card aCard;
	 struct card *cardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);
	

	return 0;
}
//Ace of Spades
//Ace of Spades
//Ace of Spades
