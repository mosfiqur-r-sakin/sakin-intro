/* Program to calculate factorial of a number
 * factorial.c — вычисление факториала натурального числа (итеративный способ).
 * Учебная программа для отработки работы с Git.
 */
git add factorial.c
#include <stdio.h>

int main(void)
{
    int number = 10;
    unsigned long long result = 1;

    for (int i = 2; i <= number; i++) {
        result = result * i;
    }

    /* === СЦЕНАРИЙ 1. МЕСТО ИЗМЕНЕНИЯ ==================================
       Заменить строку:
           printf("Result: %llu\n", result);
       на строку:
           printf("Factorial of %d is %llu\n", number, result);
       ================================================================= */
    printf("Result: %llu\n", result);

    return 0;
}
