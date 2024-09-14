#include <stdio.h>
 int main()
 {
    char fullName[50]; //limit of the length

    printf("Enter your full name here and press enter^^: \n"); //your name goes here
    fgets(fullName, sizeof(fullName), stdin); //scans for printing
    printf("Hello there, %s", fullName); //prints the name

    return 0; //ends the function
 }