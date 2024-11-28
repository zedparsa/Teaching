#include <stdio.h>

/*for (expression 1; expression 2; expression 3) {
  // code block to be executed
}*/

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i; 
    }

    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
    
    return 0;
}
