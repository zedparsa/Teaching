#include <stdio.h>
#include <stdbool.h>


/* (((! Constant variables : !)))
    1- #define variablename value
    2- const datatype variablename
*/

#define A 10

int main()
{    

    int a = 3.9;
    const int D = 5 ;
    float numberPi = 3.14;
    float b = 1.8935;


    printf("%d \n" , A);
    printf("%d \n", a);
    a = 2;
    printf("%d \n", a);
    printf("%f \n", numberPi);
    printf("%.2f \n", numberPi);
    printf("%.3f \n", b);

    char letter = 'M';  
    int intNum = -9;
    float floatNum = 5.99;
    long double doubleNum = 5.1899202022465;
    bool negative = false;
    bool positive = true;

    printf("%d\n", intNum); 
    printf("%Lf \n", doubleNum);
    printf("%.15Lf \n", doubleNum);
    printf("%f\n", floatNum);
    printf("%c\n", letter);
    printf("%d\n", negative); 
    printf("%d\n", positive);

    return 0;
}


/* ((( ! Each variables occupies a number of bytes in memory : !))) 
    int 4 bytes
    float 4 bytes [6 ta 7 ragham] --> double 8 bytes [ 15 ta 16 ragham ]
                --> long double 8 OR 16 bytes [ 17 be bala ]
    char 1 byte
    Boolean 1 byte
*/
