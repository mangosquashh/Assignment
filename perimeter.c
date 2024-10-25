#include <stdio.h>

int main(){

   int a, b, c, perimeter;

   printf("Enter side A: ");
   scanf("%d", &a);
   printf("Enter side B: ");
   scanf("%d", &b);
   printf("Enter side C: ");
   scanf("%d", &c);

   perimeter = a + b + c;

   printf("Perimeter of the triangle is %d", perimeter);

   return 0;
}