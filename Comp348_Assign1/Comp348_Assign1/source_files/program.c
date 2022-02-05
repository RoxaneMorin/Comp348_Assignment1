#include<stdio.h>
#include <stdlib.h>
#include"aggregate.h"

#ifdef _WIN32
#define WINPAUSE system("pause")
#endif

void main()
{
    printf("I C you.\n\n");

    // Tests
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

    WINPAUSE;
}