#include<stdio.h>

int isArmstrong(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isArmstrong(n))
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}
int isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    while(n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }
    if(original == sum)
        return 1;
    else
        return 0;
}