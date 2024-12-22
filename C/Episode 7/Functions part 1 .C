#include <stdio.h>

/* 
returnType functionName(parameters) {
    //Function Body
    return value; 
}
*/
void hello(); //prototype
void printNumber(int);
int square(int num);
float getPI();

int main()
{
    hello(); //call hello function
    printNumber(5); //call printNumber function with 5 as argument
    int square_result = square(6); //call square function with 6 as argument
    printf("Square of 6: %d\n", square_result);
    float pi = getPI();
    printf("Value of PI: %.2f\n", pi);

    
    return 0;
}

void hello() {
    printf("Hello Friend !\n");
}

void printNumber(int num) {
    printf("Number: %d\n", num);
}

int square(int num) {
    return num * num;
}

float getPI() {
    return 3.14;
}
