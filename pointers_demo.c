#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = malloc(5 * sizeof(int));
    if (!arr) return 1;

    for (int i = 0; i < 5; i++) {
        *(arr + i) = (i + 1) * 10;
        printf("Element %d: %d\n", i, *(arr + i));
    }

    free(arr);
    return 0;
}
