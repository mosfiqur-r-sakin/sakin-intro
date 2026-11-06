/*
 * binary-search.c — двоичный поиск элемента в упорядоченном массиве.
 * Учебная программа для отработки работы с Git.
 */

#include <stdio.h>

int binary_search(const int *array, int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
    int array[] = {1, 3, 5, 7, 9, 11, 13};
    int size = 7;

    /* === СЦЕНАРИЙ 5. МЕСТО ИЗМЕНЕНИЯ (ветка fix/search) ================
       Заменить строку:
           int target = 7;
       на строку:
           int target = 11;
       ================================================================= */
    int target = 7;

    int result = binary_search(array, size, target);

    if (result >= 0) {
        printf("Found: index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
