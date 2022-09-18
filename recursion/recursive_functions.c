/* 
 *
 * Marwan Zeid 101185876
 *
 * SYSC 2006 Lab 10. 
 */

#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * power(x, n - 1);
	}
}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
	if (n < 10)
	{
		return 1;
	}
	else
	{
		return 1 + num_digits(floor(n / 10));
	}
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */
int occurrences(int a[], int n, int target)
{
	int match = 0;

	if (a[n] == target)
	{
		match = 1;
	}

	if (n == 0)
	{
		return match;
	}
	else
	{
		return match + occurrences(a, n - 1, target);
	}
}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			return 1.0 * power(power(x, n / 2), 2);
		}
		else
		{
			return x * power(power(x, (n-1)/ 2), 2);
		}
	}
}
