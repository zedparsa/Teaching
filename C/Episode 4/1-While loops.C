#include <stdio.h>

/*while (condition) {
    code block to be executed
}*/

int main() {

    int sum = 0, num;
    printf("Enter numbers. It will stop when sum of numbers reach to 50 or more .\n");

    while (sum < 50) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }

    /*for(;sum<50;){
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }*/

    printf("Sum has reached or exceeded 50. Final sum: %d\n", sum);

    return 0;
}
