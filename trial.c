#include <stdio.h>

void arr_print(char* ptr);

int main() {
    int arr[] = {4, 5, 6, 7, 8, 9};
    printf("%d\n", arr[3]);

    printf("%d\n", *(arr + (3 * sizeof(int))));

    return 0;
}


void arr_print(char* ptr) {
    int i = 0;
    printf("[");

    while (*(ptr + i) != 0) {
        printf("%d, ", *(ptr + i));
        i++;
    }

    printf("]\n");
}