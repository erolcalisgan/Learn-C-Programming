# Array

An array is a collection of data that holds fixed number of values of same type.
For example: if you want to store marks of 100 students, you can create an array for it.

```bash
float marks[100];
```
The size and type of arrays cannot be changed after its declaration.

How to declare an array in C?
```bash

data_type array_name[array_size];

```

<md-grid-list cols="4" [style.background]="'lightblue'">
   <md-grid-tile>mark[0]</md-grid-tile>
   <md-grid-tile>mark[1]</md-grid-tile>
   <md-grid-tile>mark[2]</md-grid-tile>
   <md-grid-tile>mark[3]</md-grid-tile>
</md-grid-list>









# Structure

Combine variables into a single package called a structure.
```bash
struct sampleName
{
    int a;
    char b;
}

```

*	This structure is named sampleName.
*	It contains two variables: an integer named a and a character named b.
*	The above command only creates the structure.(it doesn't declare any variables.)

The following line declares a structure variable named s1.
```bash
struct sample s1;
```

Items within the structure are referred to by using dot notation.

```bash
printf("Character 1 is %s\n",g1.name);
```
Link :
(http://www.java2s.com/Tutorial/C/0180__Structure/Catalog0180__Structure.htm)


