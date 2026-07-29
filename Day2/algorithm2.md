# Algorithm

# Check Armstrong number

1.Start.
2.Read the number num.
3.Store the original number(n) in original .
4.Call the function isArmstrong(n).
5.Inside isArmstrong(n):
      1.Initialize sum = 0.
      2.Store n in original.
      3.Repeat until n > 0:
      4.Find digit: digit = n % 10.
      5.Calculate digit^digits.
      6.Add it to sum.
      7.Remove digit: n = n / 10.
      8.If sum == original, return True.
      9.Otherwise, return False.
6.If the function returns True, print "Armstrong Number".
7.Otherwise, print "Not an Armstrong Number".
8.Stop. 

# Convert Given number into binary formate

1.Start.
2.Declare integer variables decimal, binary = 0, remainder, and place = 1.
3.Read the value of decimal.
4.Repeat while decimal is not equal to 0:
5.Find the remainder by dividing decimal by 2
6.Add the remainder at the correct place in the binary number
7.Update the place value
8.Divide decimal by 2
9.Display "Binary equivalent =" followed by binary.
10.Stop.

# Create four function calculator

1.Start.
2.Declare variables: a, b, result as float and operator as character.
3.Read the values of a and b.
4.Read the arithmetic operator (+, -, *, /).
5.Use a switch statement based on the value of operator.
6.If the operator is +:
        Calculate result = a + b.
        Display the result.
7.If the operator is -:
        Calculate result = a - b.
        Display the result.
8.If the operator is *:
        Calculate result = a * b.
        Display the result.
9.If the operator is /:
        Check if b is not equal to 0.
        If true:
            Calculate result = a / b.
            Display the result.
        Otherwise:
            Display "Error: Division by zero is not allowed."
10.If the operator is not one of +, -, *, or /:
11.Display "Error: Invalid operator."
12.Stop.

# Find Fibonacci Series using function

1.Start.
2.Declare a function fib(n).
3.In the main() function:
4.Declare an integer variable n.
5.Read the value of n.
6.Call the function fib(n).
7.In the fib(n) function:
        1.Initialize: i = 1 ,num1 = 0 ,num2 = 1
        2.Print num1 and num2.
        3.Repeat while i < n:
        4.Calculate num3 = num1 + num2.
        5.Assign num1 = num2.
        6.Assign num2 = num3.
        7.Print num3.
        8.Increment i by 1.
8.Stop.

# Check given year is leap or not

1.Start.
2.Declare a function isLeap(year).
3.In the main() function:
        1.Declare an integer variable year.
        2.Read the value of year.
4.Call the function isLeap(year).
        1.If the function returns 1:
        2.Display "year is a leap year."
        3.Otherwise: Display "year is not a leap year."
5.In the isLeap(year) function:
        1.Check if:(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
        2.If the condition is true: Return 1.
        3.Otherwise: Return 0.
6.Stop.

# Check given number is numeric palindrome

1.Start.
2.Input the number n.
3.Call the function isPalindrome(n).
        1.In the function:
        2.Store the original number in original.
        3.Initialize reverse = 0.
        4.Repeat while n > 0:
        5.Find the last digit: digit = n % 10.
        6.Append the digit to reverse:
        7.reverse = reverse * 10 + digit.
        8.Remove the last digit from n: n = n / 10.
        9.Compare original and reverse.
        10.If they are equal, return 1.
        11.Otherwise, return 0.
4.In main():
     1.If the function returns 1, display "Number is a palindrome."
     2.Otherwise, display "Number is not a palindrome."
5.Stop.