/* SYSC 2006 Lab 3. 
 * Marwan Zeid 101185876
 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n)
{
	int i = 0;
	double sum = 0.0;

	for(; i < (int)n; i += 1)
	{
		sum = sum + fabs(x[i]);
	}

    return sum / n;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n)
{
	double sum = 0.0;

    for (int i = 0; i < (int)n; i++)
	{
		sum += pow(x[i],2);
	}

	return sum / n;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
    double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
    double min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double mini = min(x, n);
	double maxi = max(x, n);

	for (int i = 0; i < n; i++)
	{
		x[i] = (x[i] - mini) / (maxi - mini);
	}

}
