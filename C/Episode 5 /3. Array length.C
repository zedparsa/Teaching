#include <stdio.h>


// sizeof()

int main () {

    int numbers[] = {1, 2, 3, 4, 5, 6};

    int length = sizeof(numbers) / sizeof(int);
    printf("%d", length);
    return 0;
}
