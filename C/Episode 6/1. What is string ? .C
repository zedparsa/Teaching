#include <stdio.h>

/* 
C does not have a String type to easily create string variables.
Instead, you must use the char type and create an array of characters to make a string in C
*/

int main()
{
    char str1[] = "Hello Friend !";
    char str2[] = {'H','e','l','l','o',' ','F','r','i','e','n','d',' ','!','\0'};
    printf("%s\n",str2); 

    return 0; 
}
