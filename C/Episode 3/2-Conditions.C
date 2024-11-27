#include <stdio.h>

/*
    if ( Condition ){
       code...
    }
*/

/*
    if ( Condition ){
        code...
    }else if ( Condition ){
        code...
    }
*/

/*
    if ( Condition ){
       code...
    }else if ( Condition ){
       code...
    }else{
       code...
    }
*/
int main()
{
    int number;
    scanf("%d" , &number);
    if (number % 3 == 0){
        printf("number is dividable");
    }else{
        printf("number is Not dividable");
    }
    return 0;
}
