  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * Array - this program shows different methods, how to use arrays in C
   */

#include <stdio.h>
int main()
{

	int a[4]; //array declaration
	int I = 0;
	int value = 0;
	int size;

	//METHOD 1. initialization using assignment operator
	for(I = 0; I < 4; I++)
	{	
		a[I] = ++value;
		printf("%d\n", a[I]);
	}
	
	//METHOD 2. direct 
	int b[] = {1,2,3,4, 5,6,3,4,2,4,5,6,6,6};
	size = sizeof(b) / sizeof(int);
	for(I = 0; I<size; I++)
	{	
		printf("B[%d] : %d\n",I, b[I]);
	}
	
	// Finding Size of Array
	size = 	sizeof(a)/sizeof(int);
	printf("\nNo. of Elements in Array A : %d", size);
	
	// Declaring a character array
	char c[3] = {'a', 'b', 'c'};
	// Printing the contents of the array
	printf("\nC[0] : %c\n", c[0]);
	printf("C[1] : %c\n", c[1]);
	printf("C[2] : %c\n", c[2]);
	
	return 0;
}


