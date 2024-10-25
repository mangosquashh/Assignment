#include <stdio.h>

int main(){

    int i;

    while (i = 0; i < 70; i++) {
        if (i == 30) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}