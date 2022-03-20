// HomeWork5_3.c
//
//	By: Bren Garcìa Martì
//	Date: 18 Feb 2021
//	Problem Statement:
//
//	Problem Statement: write  a  program  that simulates coin tossing. For
// each toss of the coin the program should print Heads or Tails. Let
// the program toss the coin 100 times, and count the number of times each
// side o the coin appears. Print the results.
//
// The program should call a separate function called flip that takes no
// arguments and returns 0 for tails and 1 for heads.
//
// If the program realistically simulates the coin tossing, each side of the 
// coin should appear approx 50/50 for each side.
//
//				   /////// Algorithm ///////
// pre processor commands

// prototype function that takes no arguments to flip the coin

// main function
// variable count of heads
// variable count of tails
// variable store result of coin flip

// loop for 100 times
	// if the coin side is tails
		// increment tail tracker variable
	// the coin side is heads
// increment head tracker variable
// end of 100 for loop

//Display the results in a table

// end main
//
// USER FUNCTION: flip()
// seed the random with the current time
// divide random number by 2, get back a number or 0
// if 0 its heads, if a number its tails
// return the remainder results
//
/////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> // include random function
#include <time.h> // to seed random with current time
#pragma warning(disable: 4996)

int flip(); // function that takes no arguments

int main(void)
{
	int heads = 0; // count of heads
	int tails = 0; // count of tails
	int coinSide = 0; // store result of coin flip
	
	srand((unsigned int)time(NULL)); // seed the random with the current time, type cast because srand needs unsigned int
	for (int i = 1; i <= 100; i++) // loop for 100 times
	{
		coinSide = flip();
		if (coinSide == 0) // if the coin side is tails
		{
			++tails; // increment tail tracker variable
		}
		else // the coin side is heads
		{
			++heads; // increment head tracker variable
		}
	} // end of 100 for loop

	//Display the results in a table
	printf_s("Number of\nHeads\tTails\n");
	printf_s("%d\t%d\n", heads, tails);

return 0;
} // end main

int flip()
{
	//coinSide = rand() % 2;
	return (rand() % 2); // return a number or 0
}