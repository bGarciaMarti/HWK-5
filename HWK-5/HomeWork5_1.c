//						HomeWork5_1.c
//
//	By: Bren Garcìa Martì
//	Date: 18 Feb 2021
//	Problem Statement:
//
//	Problem Statement: 1)  Random Number problem: write a program to print 25 with random integer numbers 
//  between 10 and 20 (inclusive)– using a do..while loop. Print the numbers to the screen,
//  5 numbers per line(row).
//
//				   /////// Algorithm ///////
// pre processor commands
// main function
 // variable for numbers printed

// START OF do....while
// while less than 25 numbers printed
// the number is between 10 and 20
// min 10 variable
// max 20 variable
// variable for the results
// randomly generate a number
// 20-10 +1 = (rand() % 11) = remainder + 10(minimum)

//print a random number

// IF numbers printed is divisible by 5
//new line
// increment the numbers printed by 1
// END OF do....while
// while less than 25 numbers printed

// end main
//
//
/////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> // include the random function
#include<time.h> // include to make the current time the random seed
#pragma warning(disable: 4996)

int main(void)
{
	unsigned int numbersPrinted = 1;
	srand(time(NULL)); // use current time as seed for random generator
	do
	{
		// the number is between 10 and 20
		int lower = 10; // min 10
		int upper = 20; // max 20
		int result = (rand() % (upper - lower + 1)) + lower;
		// randomly generate a number
		// 20-10 +1 = (rand() % 11) = remainder + 10(minimum)
		printf_s(" %d ", result); //print a random number
		if ((numbersPrinted % 5) == 0) // numbers printed is divisible by 5
		{
			printf_s("\n"); //new line
		}
		++numbersPrinted; // increment the numbers printed by 1
	} while (numbersPrinted <= 25);

} // end main

//Source
// use rand() with range
//https://www.geeksforgeeks.org/generating-random-number-range-c/

