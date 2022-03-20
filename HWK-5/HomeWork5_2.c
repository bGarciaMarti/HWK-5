//						HomeWork5_2.c
//
//	By: Bren Garcìa Martì
//	Date: 18 Feb 2021
//	Problem Statement:
//
//	Problem Statement: write  a  program  that  prompts  the  user  to  enter  a  lower 
//	bound  number  between(5  to  10) and an  upper  bound  number(22  to  26).Using  a
//	do..while  loop  generate  a  set  of  31  random  numbers  between  the  lower and upper
//	bounds – inclusive.Print the numbers to the screen, 7 numbers per line(row).
//
//				   /////// Algorithm ///////
// pre processor commands

// main function
 // variable for numbers printed
// use current time as seed for random generator

// min 10 variable
// max 20 variable


// START OF do....while
// while less than 25 numbers printed
// the number is between 10 and 20
// min variable
// max variable
// variable for the results
// boolean variable is FALSE, first input is invalid
//prompt the user for BOTH inputs
	// do...while to validate input
// if out of range
// print error messages
	// if minimum is invalid
		// prompt again
	// if maximum is invalid
		// prompt again
// end of if print error messages
// Else
	// if not invalid, input is valid. set bool to true to leave the do...while
// end of do...while to validate input

// do while from HomeWork5_1.c
// randomly generate a number
// 20-10 +1 = (rand() % 11) = remainder + 10(minimum)

//print a random number

// IF numbers printed is divisible by 5
//new line
// increment the numbers printed by 1
// END OF do....while
// while less than 31 numbers printed

// end main

//
//
/////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> // include the random function
#include <time.h> // include to make the current time the random seed
#include <stdbool.h> //add boolean library
#pragma warning(disable: 4996)

int main(void)
{
	unsigned int numbersPrinted = 1;
	srand(time(NULL)); // use current time as seed for random generator

	int lower = 0; // min between 5 and 10
	int upper = 0; // max between 22 and 26
	bool validInput = false; // set the valid input to false

	//prompt the user for BOTH inputs
	printf_s("Enter a minimum between 5 and 10: ");
	scanf("%d", &lower);
	printf_s("Enter a maximum between 22 and 26: ");
	scanf("%d", &upper);
	
	// do...while to validate input
	do
	{
		if ((lower < 5) || (lower > 10) || (upper < 22) || (upper > 26)) // if out of range
		{// print error messages
			if ((lower < 5) || (lower > 10)) // if minimum is invalid
			{
				// prompt again
				printf_s("	ERROR - input minimum out of range\n");
				printf_s("Enter a minimum between 5 and 10: ");
				scanf("%d", &lower);
			}
			else if ((upper < 22) || (upper > 26)) //if maximum is invalid
			{
				// prompt again
				printf_s("	ERROR - input maximum out of range\n");
				printf_s("Enter a maximum between 22 and 26: ");
				scanf("%d", &upper);
			}

		} // end of if print error messages
		else // otherwise
		{
			validInput = true; // if not invalid, input is valid.
		}
	} while (validInput == false);	// end of do...while to validate input

	// do while from HomeWork5_1.c for 31 numbers instead of 25
	do
	{
		int result = (rand() % (upper - lower + 1)) + lower;
		// randomly generate a number
		printf_s(" %d ", result); //print a random number
		if ((numbersPrinted % 7) == 0) // numbers printed is divisible by 7, to put 7 values per line
		{
			printf_s("\n"); //new line
		}
		++numbersPrinted; // increment the numbers printed by 1
	} while (numbersPrinted <= 31);

} // end main

//Source
// use rand() with range
//https://www.geeksforgeeks.org/generating-random-number-range-c/