#include<stdio.h>
int main()
{
    int decimal, binary = 0, remainder, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while(decimal != 0)
    {
        remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }
    printf("Binary equivalent: %d\n", binary);
    return 0;
}