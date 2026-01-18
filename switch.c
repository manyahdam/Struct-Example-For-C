#include <stdio.h>
#include <stdbool.h>
//#include <string.h>
//#include <math.h>

int main(){ 

   char operator = '\0';
   double num1 = 0.0;
   double num2 = 0.0;
   double result = 0.0;

   printf("Enter the first number: ");
   scanf("%lf", &num1);

   printf("Enter the operator (+ - * /): ");
   scanf(" %c", &operator);

   printf("Enter the second number: ");
   scanf("%lf", &num2);

   switch (operator)
   {
   case '+':
    result = num1 + num2;
    break;
    case '-':
    result = num1 - num2;
    break;
    case '*':
    result = num1 * num2;
    break;
    case '/':
      if(num2 == 0){
         printf("You can't divide by 0");
         return 0;
      }
      else{
    result = num1 / num2;
      }
    break;
   }
   
   printf("%lf %c %lf = %.4lf", num1, operator, num2, result);

   
 return 0;
}


