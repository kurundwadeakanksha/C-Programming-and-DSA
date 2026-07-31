# Algorithm

# Matrix Addition, Subtraction, and Multiplication
1.addMatrices()<br>
    1.Start.<br>
    2.Traverse each element of both matrices.<br>
    3.Add corresponding elements.<br>
    4.Store the result in the result matrix.<br>
    5.Stop.<br>
2.subtractMatrices()<br>
    1.Start.<br>
    2.Traverse each element of both matrices.<br>
    3.Subtract corresponding elements (A - B).<br>
    4.Store the result in the result matrix.<br>
    5.Stop.<br>
3.multiplyMatrices()<br>
    1.Start.<br>
    2.For each row of Matrix A:<br>
    3.For each column of Matrix B:<br>
    4.Initialize the result element to 0.<br>
    5.Multiply corresponding elements and add them to the result.<br>
    6.Store the final value in the result matrix.<br>
    7.Stop.<br>

# Find Maximum and Minimum Element in an Array
1.Start<br>
2.Read the number of elements n.<br>
3.Declare an array arr[n].<br>
4.Read all n elements of the array.<br>
5.Call the findMax() function to find the maximum element.<br>
    1.findMax()<br>
    2.Start<br>
    3.Initialize max = arr[0].<br>
    4.Repeat from i = 1 to n - 1:<br>
    5.If arr[i] > max, then set max = arr[i].<br>
    6.Return max.<br>
6.Call the findMin() function to find the minimum element.<br>
    1.findMin()<br>
    2.Start<br>
    3.Initialize min = arr[0].<br>
    4.Repeat from i = 1 to n - 1:<br>
    5.If arr[i] < min, then set min = arr[i].<br>
    6.Return min.<br>
7.Display the maximum element.<br>
8.Display the minimum element.<br>
9.Stop<br>

# Check Whether a String is a Palindrome
1.Start<br>
2.Declare a string str.<br>
3.Read the string from the user.<br>
4.Call the isPalindrome() function.<br>
    1.isPalindrome()<br>
    2.Start<br>
    3.Find the length of the string using strlen().<br>
    4.Set:<br>
        i = 0 (first character)<br>
        j = length - 1 (last character)<br>
    5.Repeat until i < j:<br>
    6.If str[i] is not equal to str[j], return 0 (Not a palindrome).<br>
    7.Increment i and decrement j.<br>
    8.If all characters match, return 1 (Palindrome).<br>
5.If the function returns 1, display "The string is a palindrome."<br>
6.Otherwise, display "The string is not a palindrome."<br>
7.Stop<br>

# Reverse an Array
1.Start<br>
2.Read the number of elements n.<br>
3.Declare an array arr[n].<br>
4.Read the array elements.<br>
5.Call the reverseArray() function.<br>
    1.reverseArray()<br>
    2.Start<br>
    3.Set i = 0 and j = n - 1.<br>
    4.Repeat until i >= j:<br>
    5.Store arr[i] in a temporary variable temp.<br>
    6.Assign arr[i] = arr[j].<br>
    7.Assign arr[j] = temp.<br>
    8.Increment i.<br>
    9.Decrement j.<br>
    10.Return<br>
6.Print the reversed array.<br>
7.Stop<br>

# Store and Display Details of 5 Students Using Structure
1.Start<br>
2.Define a structure Student<br>
        1.rollNumber<br>
        2.name<br>
        3.marks<br>
3.Declare an array of 5 student structures.<br>
4.Repeat until all 5 students' details are entered:<br>
5.Read the roll number.<br>
6.Read the name.<br>
7.Read the marks.<br>
8.Store the details in the structure.<br>
9.Repeat until details of all 5 students are displayed:<br>
10.Print the roll number.<br>
11.Print the name.<br>
12.Print the marks.<br>
13.Stop<br>

# Convert All Lowercase Vowels in a String to Uppercase
1.Start<br>
2.Read the input string.<br>
3.Call the convertVowels() function.<br>
    1.Start<br>
    2.Set i = 0.<br>
    3.Repeat until the end of the string ('\0') is reached:<br>
    4.Check if str[i] is 'a', 'e', 'i', 'o', or 'u'.<br>
    5.If yes, convert it to uppercase by subtracting 32 from its ASCII value.<br>
    6.Increment i.<br>
    7.Return to the main function.<br>
4.Display the modified string.<br>
5.Stop<br>
