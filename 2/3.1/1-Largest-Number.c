#include <stdio.h>

int main()
{
    double num1, num2, num3;

    //titleeeee :DD//
    printf("The largest number of them all");
    puts("\n"); //blank space :D
    //this is where the user will enter the three numbers//
    printf("Give three different numbers to proceed\n");
    printf("1st number here: ");
    scanf("%lf", &num1);
    printf("2nd number here: ");
    scanf("%lf", &num2);
    printf("3rd number here: ");
    scanf("%lf", &num3);

    //if statement is only used in order to decide what number is the largest//
    if (num1 >= num2 && num1 >= num3)
    printf ("%.2f is the largest number^^", num1); //if num1 is larger than the two, it will be considered the largest//
    if (num2 >= num1 && num2 >= num3)
    printf ("%.2f is the largest number^^", num2); //if num2 is larger than the two, it will be considered the largest//
    if (num3 >= num1 && num3 >= num2)
    printf ("%.2f is the largest number^^", num3); //if num3 is larger than the two, it will be considered the largest//

    return 0;
}
