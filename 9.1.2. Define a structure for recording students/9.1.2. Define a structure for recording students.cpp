// 9.1.2. Define a structure for recording students.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
typedef struct 
{
	const char *name;
	float marks;
}student;

struct insan
{
	int yas;
	const char *isim;


}ali,veli;

int main()
{
	const char *d;
	d = "MERHABA";
	ali.isim = "ALI";
	 student student1;
	 student student2;
	 student student3;
	//strcpy(student1.name, "Tom");
	//strcpy(student1.name,"TOM");

	student1.name = "Tom";
	student2.marks = 99.9f;
	printf(" Name is %s \n", student1.name);
	printf(" Marks are %f \n", student2.marks);
	
    return 0;
}

//Name is Tom
//Marks are 99.900002