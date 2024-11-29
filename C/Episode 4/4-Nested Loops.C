#include <stdio.h>

/*for (initialization; condition; increment) {

    for (initialization; condition; increment) {
    
    }

}*/

int main() {

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 5; j++) {

            printf("%d x %d = %d\t", i, j, i * j);
        }
        
        printf("\n");
    }

    return 0;
}
