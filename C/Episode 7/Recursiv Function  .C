#include <stdio.h>

int factorial(int);

int main() 
{
    int result = factorial(4);
    printf("Factorial of 4 is : %d\n", result);

    return 0;
}
int factorial(int number) {
    if (number == 0){ 
        return 1;
    } //Condition of end 
    return number * factorial(number - 1); // call function
}
