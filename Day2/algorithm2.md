# Algorithm<br>

# Check Armstrong number<br>

1.Start.<br>
2.Read the number num.<br>
3.Store the original number(n) in original .<br>
4.Call the function isArmstrong(n).<br>
5.Inside isArmstrong(n):<br>
      1.Initialize sum = 0.<br>
      2.Store n in original.<br>
      3.Repeat until n > 0:<br>
      4.Find digit: digit = n % 10.<br>
      5.Calculate digit^digits.<br>
      6.Add it to sum.<br>
      7.Remove digit: n = n / 10.<br>
      8.If sum == original, return True.<br>
      9.Otherwise, return False.<br>
6.If the function returns True, print "Armstrong Number".<br>
7.Otherwise, print "Not an Armstrong Number".<br>
8.Stop. <br>

# Convert Given number into binary formate<br>

1.Start.<br>
2.Declare integer variables decimal, binary = 0, remainder, and place = 1.<br>
3.Read the value of decimal.<br>
4.Repeat while decimal is not equal to 0:<br>
5.Find the remainder by dividing decimal by 2<br>
6.Add the remainder at the correct place in the binary number<br>
7.Update the place value<br>
8.Divide decimal by 2<br>
9.Display "Binary equivalent =" followed by binary.<br>
10.Stop.<br>

# Create four function calculator<br>

1.Start.<br>
2.Declare variables: a, b, result as float and operator as character.<br>
3.Read the values of a and b.<br>
4.Read the arithmetic operator (+, -, *, /).<br>
5.Use a switch statement based on the value of operator.<br>
6.If the operator is +:<br>
        Calculate result = a + b.<br>
        Display the result.<br>
7.If the operator is -:<br>
        Calculate result = a - b.<br>
        Display the result.<br>
8.If the operator is *:<br>
        Calculate result = a * b.<br>
        Display the result.<br>
9.If the operator is /:<br>
        Check if b is not equal to 0.<br>
        If true:<br>
            Calculate result = a / b.<br>
            Display the result.<br>
        Otherwise:<br>
            Display "Error: Division by zero is not allowed."<br>
10.If the operator is not one of +, -, *, or /:<br>
11.Display "Error: Invalid operator."<br>
12.Stop.<br>

# Find Fibonacci Series using function<br>

1.Start.<br>
2.Declare a function fib(n).<br>
3.In the main() function:<br>
4.Declare an integer variable n.<br>
5.Read the value of n.<br>
6.Call the function fib(n).<br>
7.In the fib(n) function:<br>
        1.Initialize: i = 1 ,num1 = 0 ,num2 = 1<br>
        2.Print num1 and num2.<br>
        3.Repeat while i < n:<br>
        4.Calculate num3 = num1 + num2.<br>
        5.Assign num1 = num2.<br>
        6.Assign num2 = num3.<br>
        7.Print num3.<br>
        8.Increment i by 1.<br>
8.Stop.<br>

# Check given year is leap or not<br>

1.Start.<br>
2.Declare a function isLeap(year).<br>
3.In the main() function:<br>
        1.Declare an integer variable year.<br>
        2.Read the value of year.<br>
4.Call the function isLeap(year).<br>
        1.If the function returns 1:<br>
        2.Display "year is a leap year."<br>
        3.Otherwise: Display "year is not a leap year."<br>
5.In the isLeap(year) function:<br>
        1.Check if:(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)<br>
        2.If the condition is true: Return 1.<br>
        3.Otherwise: Return 0.<br>
6.Stop.<br>

# Check given number is numeric palindrome<br>

1.Start.<br>
2.Input the number n.<br>
3.Call the function isPalindrome(n).<br>
        1.In the function:<br>
        2.Store the original number in original.<br>
        3.Initialize reverse = 0.<br>
        4.Repeat while n > 0:.<br>
        5.Find the last digit: digit = n % 10..<br>
        6.Append the digit to reverse:.<br>
        7.reverse = reverse * 10 + digit..<br>
        8.Remove the last digit from n: n = n / 10..<br>
        9.Compare original and reverse..<br>
        10.If they are equal, return 1..<br>
        11.Otherwise, return 0..<br>
4.In main():.<br>
     1.If the function returns 1, display "Number is a palindrome.".<br>
     2.Otherwise, display "Number is not a palindrome.".<br>
5.Stop..<br>
