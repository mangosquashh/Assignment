#include <stdio.h>

int main()
{

    char operator; //for operators
    double num1; //given number 1
    double num2; //given number 2
    double result; //results for the given numbers

    printf("\nEnter an operator (+ - * /): "); //select an operator you would like to use
    scanf("%c", &operator);

    printf("Enter number 1: "); //given num1 goes here
    scanf("%lf", &num1);

    printf("Enter number 2: "); //given num2 goes here
    scanf("%lf", &num2);

    switch(operator){ //switches depending on the case shown below
        case '+': //case number 1 is addition
           result = num1 + num2;
           printf("\nsum: %.2lf", result); //prints the result of the given
           break;
        case '-': //case number 2 is subtraction
           result = num1 - num2;
           printf("\ndifference: %.2lf", result); //prints the result of the given
           break;
        case '*': //case number 3 is multiplication
           result = num1 * num2;
           printf("\nproduct: %.2lf", result); //prints the result of the given
           break;
        case '/': //case number 4 is division
           result = num1 / num2;
           printf("\nquotient: %.2lf", result); //prints the result of the given
           break; 
    default:
        printf("%c is not valid", operator); //if the operator is not according to what was shown

        return 0; //ends the function          
    }

    
}