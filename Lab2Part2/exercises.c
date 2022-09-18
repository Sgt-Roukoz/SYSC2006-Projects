/* SYSC 2006 Lab 2, Part 2.
 * Marwan Zeid 101185876
 * Incomplete implementations of the functions that will be coded during the lab. 
 */

#include <stdlib.h>
#include <math.h>

#include "exercises.h"

/* Returns n! for n >= 0. (0! is defined to be 1.)
   Note that the return type is int, and n! grows rapidly as n increases,
   so this function should only be used for fairly small values of n; 
   i.e., if ints are implemented as 32-bit values, n must be <= 15.
 */
int factorial(int n)
{
	int product = n;

	if (n == 0)
	{
		product = 1;
	}
	else
	{
		n -= 1;
		for (; n > 1; n -= 1)
		{
			product *= n;
		}
	}

	return product;
}

/* Returns the number of different ordered subsets of k objects picked
   from a set of n objects, for n > 0, k > 0, n >= k.
 */
int ordered_subsets(int n, int k)
{
	int numOfSubsets;

	numOfSubsets = (factorial(n)) / (factorial(n - k));
	return numOfSubsets;
}

/* Returns the binomial coefficient (n k); that is, the number of 
   combinations of k objects that can be chosen from a set of n objects, 
   for n > 0, k > 0, n >= k.
 */
int binomial(int n, int k)
{
	int binomialCoeff;

	binomialCoeff = ordered_subsets(n, k) / factorial(k);
	return binomialCoeff;
}

/* Returns the cosine of x (measured in radians) by calculating
 * the first n terms of the infinite series expansion of cosine.
 */
double cosine(double x, int n)
{
	int terms = 0;
	double cosi = 1;

	for (; terms < n; terms += 2)
	{
		if (terms % 4 == 0)
		{
			cosi += (pow(x, terms) / factorial(terms));
		}
		else
		{
			cosi -= (pow(x, terms) / factorial(terms));
		}
	}

	return cosi;
}
