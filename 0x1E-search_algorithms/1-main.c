#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        2, 5, 7, 13, 14, 17, 23, 26, 29, 31, 33, 37, 38, 41, 44, 47, 53, 59, 61, 67
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 29, binary_search(array, size, 29));
    printf("Found %d at index: %d\n\n", 67, binary_search(array, size, 67));
    printf("Found %d at index: %d\n", 2, binary_search(array, size, 2));
    return (EXIT_SUCCESS);
}
