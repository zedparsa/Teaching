#include <stdio.h>

/* 
returnType functionName(parameters) {
    //Function Body
    return value; 
}
*/
void hello(); //prototype

int main()
{
    hello(); //call hello function

    return 0;
}

void hello() {
    printf("Hello Friend !\n");
}
