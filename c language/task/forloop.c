#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 100 and 2000 are:\n");



    for(i = 100; i <= 2000; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
