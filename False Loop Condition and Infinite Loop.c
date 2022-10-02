// Make infinite loop (condition always true)
// Make loop never print (condition never true)
// Know what each iteration of loop will print
// Example - What will be printed at the 3rd iteration of the loop? -- 3. This is because a[2]=3


//#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

int *a;
int size = 6;
int i;

a = (int*)calloc(size, (sizeof(int)));

a[0] = 8;
a[1] = 45;
a[2] = 3;
a[3] = 9;
a[4] = 11;
a[5] = 98;

printf("Printing array forwards: \n");

for (i=0; i<size; i++)
printf("%d \n", a[i]);



/* INFINITE LOOP EXAMPLE:
   for (i=0; i<size; i++)
   printf("%d" \n);
   i--;  //this will make condition always true

   INFINITE LOOP #2:
   for (i=0; i<size; i--) --- the i-- will make i ALWAYS smaller than size. Condition always true, will keep looping infinitely 
   printf("%d" \n);
*/


// LOOP NOT PRINTING EXAMPLE:
for (i=0; i != 0 ; i++) // i intialized to 0 but condition is for i to not equal 0.. condition never true
printf("%d \n", a[i]);

// LOOP NOT PRINTING EXAMPLE #2:
for (i=0; i>size; i++)
printf("%d \n", a[i]);

// LOOP NOT PRINTING EXAMPLE #3
for (i=0; i<size; i++)
//printf("%d \n", a[i]); 

// LOOP NOT PRINTING EXAMPLE #4
for (i=size; i<size; i++)
printf("%d \n", a[i]);



printf("Printing array backwards: \n");

// to print array backwards
for (i = size-1; i >= 0; i--)
printf("%d \n", a[i]);


printf("We will free memory and after that, try to print our array which cannot be done. \n");

// to free memory and prove it is free
free(a);
for (i = 0; i < size; i++)
printf("%d \n", a[i]);

}

