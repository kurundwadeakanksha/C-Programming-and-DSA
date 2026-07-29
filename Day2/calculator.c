#include<stdio.h>
int main()
{
    float a, b, result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch(operator)
    {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if(b != 0)
            {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}