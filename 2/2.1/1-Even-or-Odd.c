#include <stdio.h>

int main()
{
    int num;

    printf("Is it even or odd?\n"); //titleee :DD//
    printf("Enter a number here: "); //user will enter the number here//
    scanf("%d", &num);

    if(num % 2 == 0) //inside the quote will be the deciding factor on what is considered as even 
    printf("%d is even!^^", num); //if the given is even
    else
    printf("%d is odd!^^", num); //if the given is odd

    return 0;
}
