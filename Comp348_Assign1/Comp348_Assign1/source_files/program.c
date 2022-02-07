/* Functions and Pointers: Q4. */

#include<stdio.h>
#include <stdlib.h>
#include"aggregate.h"

#ifdef _WIN32
#define WINPAUSE system("pause")
#endif

void main()
{
    /* Functions and Pointers: Q4. */

    float (*aggregates[5]) (float*, int size) = { &minf, &maxf, &sum, &avg, &pseudo_avg };

    float five_numbers[5] = {5, 4, 3, 2, 1};
    float ten_numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    float result;


    int i = 0;
    for (i = 0; i < 5; i++)
    {
        result = aggregates[i](five_numbers, 5);
        printf("Result of the current function on the array of five numbers: %.2f.\n\n", result);

        result = aggregates[i](ten_numbers, 10);
        printf("Result of the current function on the array of ten numbers: %.2f.\n\n", result);
    }


    WINPAUSE; // Keeps the window open after execution so we can see the results.
}

void test()
{
    // Basic tests of the functions.

    float numbers[] = { 1, 2, 3, 4, 14, 8 };

    float min = minf(numbers, 6);
    printf("Minimum value in the array: %.2f.\n", min);

    float max = maxf(numbers, 6);
    printf("Maximum value in the array: %.2f.\n", max);

    float arraysum = sum(numbers, 6);
    printf("Sum of all the values in the array: %.2f.\n", arraysum);

    float arrayavg = avg(numbers, 6);
    printf("Average of all the values in the array: %.2f.\n", arrayavg);

    float pseudoavg = pseudo_avg(numbers, 6);
    printf("Averages of the minimum and maximum values in the array: %.2f.\n\n", pseudoavg);
}