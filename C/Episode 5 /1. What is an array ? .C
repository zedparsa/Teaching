#include <stdio.h>

/*
Arrays are used to store multiple values in a single variable,
instead of declaring separate variables for each value.
*/

/*
why array ?
int student1, student2, student3, ..., student100;
int scores[100]; 
*/

/*
DataType  VariableName [size] ;
*/

int main()
{
    int number[] = {2.4 , 3 , 60 , 2000};
    float array[] = {1, 5, 3.6, -17};
    char letters[] = {'a', 'b', 'c', 'd'};
    
    for(int i = 0; i < 4; i++){
        printf("Array index %d Element: %d \n",i, number[i]);
    }

    printf("========================= \n");

    for(int i = 0; i < 4; i++){
        printf("Array index %d Element: %.2f \n",i, array[i]);
    }

    printf("========================= \n");

    for(int i = 0; i < 4; i++){
        printf("Array index %d Element: %c \n",i, letters[i]);
    }

    return 0;
}
