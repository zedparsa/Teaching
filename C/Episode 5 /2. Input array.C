#include <stdio.h>

int main()
{
    int size ;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++){
        printf("array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    
    printf("The elements of array are : ");
    for(int i=0 ; i < size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
