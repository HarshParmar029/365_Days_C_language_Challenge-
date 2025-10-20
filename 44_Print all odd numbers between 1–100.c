#include <stdio.h>
int main() {
    int i;
    printf("Odd numbers between 1 and 100:\n");

    for (i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    return 0;
}

