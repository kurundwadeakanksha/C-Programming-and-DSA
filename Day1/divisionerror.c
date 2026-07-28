#include<stdio.h>

int main() 
{
     int num1, num2, result;
     printf("Enter two integers: ");
     scanf("%d %d", &num1, &num2);
     if(num2 == 0) 
     {
         printf("Error: Division by zero is not allowed.\n");
     } 
     else 
     {
         result = num1 / num2;
         printf("Result: %d\n", result);
     }
     
    return 0;
}