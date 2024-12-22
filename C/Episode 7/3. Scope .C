#include <stdio.h>

int globalVar = 10; //Global variable

void display();

int main()
{
    display();
    
    return 0;
}

void display() {
    int localVar = 5; //Local variable
    printf("Local: %d, Global: %d\n", localVar, globalVar);
}
