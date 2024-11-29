#include <stdio.h>

int main()
{
    for(int i=0 ; i<=10 ; i++){
        if(i==5){
            break;
        }
        printf("%d\t", i);
    }
    printf("\n");

    for(int j=0 ; j<=10 ; j++){
        if(j==5){
            continue;
        }
        printf("%d\t", j);
    }
}
