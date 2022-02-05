/* Functions and Pointers: Q3. */

#include<stdio.h>
#include<float.h>
#include"aggregate.h"


// Verify whether the array and its size are valid.
// If they aren't, print error message and return.
bool isvalid(float* array, int size)
{
	return (array != NULL && size > 0);
}


// Returns the minimum element of an array.
float minf(float* array, int size)
{
	if (isvalid(array, size) == false)
	{
		printf("FATAL ERROR at line %i", __LINE__);
		return -1;
	}

	float min = FLT_MAX;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

// Returns the maximum element of an array.
float maxf(float* array, int size)
{
	if (isvalid(array, size) == false)
	{
		printf("FATAL ERROR at line %i", __LINE__);
		return -1;
	}

	float max = FLT_MIN;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}

// Returns the sum of all elements in an array.
float sum(float* array, int size)
{
	if (isvalid(array, size) == false)
	{
		printf("FATAL ERROR at line %i", __LINE__);
		return -1;
	}

	float sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

// Returns the average of all elements in an array.
float avg(float* array, int size)
{
	if (isvalid(array, size) == false)
	{
		printf("FATAL ERROR at line %i", __LINE__);
		return -1;
	}
	
	float arraysum = sum(array, size);

	return (arraysum / size);
}

// Returns the average of the maximum and minimum elements of an array.
float pseudo_avg(float* array, int size)
{
	if (isvalid(array, size) == false)
	{
		printf("FATAL ERROR at line %i", __LINE__);
		return -1;
	}

	float min = minf(array, size);

	float max = maxf(array, size);

	return ((min + max) / 2);
}
