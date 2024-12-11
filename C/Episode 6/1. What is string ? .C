#include <stdio.h>

/* C does not have a String type to easily create string variables.
 Instead, you must use the char type and create an array of characters to make a string in C*/

int main()
{
    // Declare and initialize a string variable
    //char str[] = "Hello Friend !";
    char str[] = {'H','e','l','l','o',' ','F','r','i','e','n','d',' ','!','\0'};
    printf("%s\n",str); 

    return 0; 
}
