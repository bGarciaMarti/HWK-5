//						HomeWork5_3.c
//
//	By: Bren Garcìa Martì
//	Date: 18 Feb 2021
//	Problem Statement:
//
//	Problem Statement: write  a  program  that  calculates the value of pi from the
//	infinite series:
//	pi = 4-(4/3)+(4/5)-(4/7)+(4/9)-(4/11)+...etc.
//	Print a table that shows the value of pie approximately by one term
//	of this series, by two terms, three terms, and so on. How many termsof this
//	series do you have to use before you first get 3.14? 3.141?3.1415? 3.14159? 
//
//				   /////// Algorithm ///////
// pre processor commands

// main function
// float for pi
// variable for the denominator 
// the denominator is odd, so use equation ((2 * counting-up) + 1)

//label for the display table
// for loop that counts up from 1-1000
// use and if else to alternate between adding and subtracting
// if the count is even, add
// if the count is odd, subtract
// end of pi ifelse
// display the counter and the pi result
// end of 200 counting for loop
// end main
//
//
/////////////////////////////////////////
#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	float pi = 0.0;
	float denominator = 0.0;

	printf_s("Terms\tValue\n");

	for (int i = 0; i <=1000; i++) // counter, up to 1000
	{
		denominator = ((2 * i) + 1); // the denominator is odd
		// use and if else to alternate between adding and subtracting
		if (i % 2 == 0) //if the counter is even
		{
			pi = pi + (4.0 / denominator); // add
		}
		else // if the counter is odd
		{
			pi = pi - (4.0 / denominator); // subtract
		} // end of pie ifelse
		printf_s("%d\t%f\n", i, pi); // print the counter and the pi
	} // end of for loop
return 0;
} // end main

// SOURCE
// https://www.geeksforgeeks.org/calculate-pi-with-python/