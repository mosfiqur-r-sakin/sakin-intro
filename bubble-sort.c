/*
 * bubble-sort.c — сортировка массива методом пузырька.
 * Учебная программа для отработки работы с Git.
 */

#include <stdio.h>

int main(void)
{
    int array[] = {5, 2, 9, 1, 7};
    int size = 5;

    /* === СЦЕНАРИЙ 3. БЛОК КОНФЛИКТА ===================================
       Строку ниже по-разному изменяют две ветки:
         ветка fix/comments заменяет её на строку:
             const char *description = "Variant A: comments corrected.";
         ветка fix/description заменяет её на строку:
             const char *description = "Variant B: description extended.";
       Так как изменена одна и та же строка одного файла, при слиянии
       этих веток возникает конфликт слияния.
       ================================================================= */
    const char *description = "Bubble sort (example).";

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("%s\n", description);
    printf("Sorted:");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}
