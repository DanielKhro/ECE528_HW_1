/*
 * fibonacci.c
 *
 *  Created on: Sep 27, 2026
 *      Author: Daniel
 */

#include <stdio.h>

int fibonacci(void)
{
    int num;
    int previous = 0;
    int current = 1;
    int next = 0;
    int i;

    printf("Enter an integer N (N >= 2): ");

    if (scanf("%d", &num) != 1)
    {
        printf("Error: You must enter an integer.\n");
        return 1;
    }

    if (num < 2)
    {
        printf("Error: N must be greater than or equal to 2.\n");
        return 1;
    }

    printf("0 1 ");

    for (i = 2; i <= num; i++)
    {
        next = previous + current;

        printf("%d ", next);

        previous = current;
        current = next;
    }

    printf("\nThe Fibonacci number F%d is %d. \n", num, current);

    return 0;
}
