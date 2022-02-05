/* Functions and Pointers: Q3. */

#include<stdio.h>
#include<stdbool.h>


bool isvalid(float* array, int size); // Verify whether the array and its size are valid. 

float minf(float* array, int size); // Returns the minimum element of an array.

float maxf(float* array, int size); // Returns the maximum element of an array.

float sum(float* array, int size); // Returns the sum of all elements in an array.

float avg(float* array, int size); // Returns the average of all elements in an array.

float pseudo_avg(float* array, int size); // Returns the average of the maximum and minimum elements of an array.