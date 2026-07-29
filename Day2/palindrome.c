#include<stdio.h>

int isPalindrome(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPalindrome(n))
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
    return 0;
}
int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;
    while(n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    if(original == reverse)
        return 1; 
    else
        return 0;
}