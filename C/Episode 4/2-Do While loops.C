#include <stdio.h>

/*do {
  // code block to be executed
}
while (condition);*/
int main() {
    int num;

    do {
        printf("Please enter a positive number: ");
        scanf("%d", &num);
        
        if (num <= 0) {
            printf("The number is not positive. Please try again.\n");
        }
        
    } while (num <= 0);

    printf("Thank you! You entered a positive number: %d\n", num);

    return 0;
}
