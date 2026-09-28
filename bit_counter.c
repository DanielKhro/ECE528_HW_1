/*
 * fibonacci.c
 *
 *  Created on: Sep 27, 2026
 *      Author: Daniel
 */
#include <stdio.h>

int bit_counter(void)
{
    unsigned int num;
    unsigned int n;
    int cnt = 0;
    char first_character;

    printf("Enter an unsigned integer:\n");

    scanf(" %c", &first_character);

    if (first_character == '-')
    {
        printf("Error: negative numbers are not allowed.\n");
        return 1;
    }

    ungetc(first_character, stdin);

    if (scanf("%u", &num) != 1)
    {
        printf("Error: invalid input.\n");
        return 1;
    }

    n = num;

    while (n != 0)
    {
        n &= (n - 1);
        cnt++;
    }

    printf("Number of bits set in %u: %d\n", num, cnt);

    return 0;
}
