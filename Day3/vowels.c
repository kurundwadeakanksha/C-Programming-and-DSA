#include<stdio.h>
#include<string.h>
int convertVowels(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32; 
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
     convertVowels(str);
    printf("String with vowels converted to uppercase: %s\n", str);

    return 0;
}