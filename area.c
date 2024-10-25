#include <stdio.h>

int main(){

    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of the rectangle is %d", area);

    return 0;
}