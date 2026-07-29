#include<stdio.h>

int fib(int n);

int main()
{ 
  int n;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  
  fib(n);
  return 0;
}
int fib(int n)
{ 
   int i=1;
   int num1 = 0;
   int num2 = 1;
   printf("%d ",num1);
   printf("%d ",num2);
   int num3;
   while(i < n)
    {  
       num3 = num1 + num2;
       num1=num2;
       num2=num3;
       printf("%d ",num3);
       i++;
    }
}