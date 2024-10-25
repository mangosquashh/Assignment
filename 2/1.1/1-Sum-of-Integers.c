#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Addition of two integers\n"); //title :DD//
    //here is where the user will enter the given numbers//
    printf("1st number here: ");
    scanf ("%d", &num1);
    printf("2nd number here: ");
    scanf ("%d", &num2);

    sum = num1 + num2; //how the 2 numbers will be calculatedd (addition)
    //prints the result of the given numbers//
    printf("sum of %d and %d results to %d!^^", num1, num2, sum);

    return 0;
} 