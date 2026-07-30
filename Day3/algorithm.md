# Algorithm

# Matrix Addition, Subtraction, and Multiplication
1.addMatrices()
    1.Start.
    2.Traverse each element of both matrices.
    3.Add corresponding elements.
    4.Store the result in the result matrix.
    5.Stop.
2.subtractMatrices()
    1.Start.
    2.Traverse each element of both matrices.
    3.Subtract corresponding elements (A - B).
    4.Store the result in the result matrix.
    5.Stop.
3.multiplyMatrices()
    1.Start.
    2.For each row of Matrix A:
    3.For each column of Matrix B:
    4.Initialize the result element to 0.
    5.Multiply corresponding elements and add them to the result.
    6.Store the final value in the result matrix.
    7.Stop.

# Find Maximum and Minimum Element in an Array
1.Start
2.Read the number of elements n.
3.Declare an array arr[n].
4.Read all n elements of the array.
5.Call the findMax() function to find the maximum element.
    1.findMax()
    2.Start
    3.Initialize max = arr[0].
    4.Repeat from i = 1 to n - 1:
    5.If arr[i] > max, then set max = arr[i].
    6.Return max.
6.Call the findMin() function to find the minimum element.
    1.findMin()
    2.Start
    3.Initialize min = arr[0].
    4.Repeat from i = 1 to n - 1:
    5.If arr[i] < min, then set min = arr[i].
    6.Return min.
7.Display the maximum element.
8.Display the minimum element.
9.Stop

# Check Whether a String is a Palindrome
1.Start
2.Declare a string str.
3.Read the string from the user.
4.Call the isPalindrome() function.
    1.isPalindrome()
    2.Start
    3.Find the length of the string using strlen().
    4.Set:
        i = 0 (first character)
        j = length - 1 (last character)
    5.Repeat until i < j:
    6.If str[i] is not equal to str[j], return 0 (Not a palindrome).
    7.Increment i and decrement j.
    8.If all characters match, return 1 (Palindrome).
5.If the function returns 1, display "The string is a palindrome."
6.Otherwise, display "The string is not a palindrome."
7.Stop

# Reverse an Array
1.Start
2.Read the number of elements n.
3.Declare an array arr[n].
4.Read the array elements.
5.Call the reverseArray() function.
    1.reverseArray()
    2.Start
    3.Set i = 0 and j = n - 1.
    4.Repeat until i >= j:
    5.Store arr[i] in a temporary variable temp.
    6.Assign arr[i] = arr[j].
    7.Assign arr[j] = temp.
    8.Increment i.
    9.Decrement j.
    10.Return
6.Print the reversed array.
7.Stop

# Store and Display Details of 5 Students Using Structure
1.Start
2.Define a structure Student
        1.rollNumber
        2.name
        3.marks
3.Declare an array of 5 student structures.
4.Repeat until all 5 students' details are entered:
5.Read the roll number.
6.Read the name.
7.Read the marks.
8.Store the details in the structure.
9.Repeat until details of all 5 students are displayed:
10.Print the roll number.
11.Print the name.
12.Print the marks.
13.Stop

# Convert All Lowercase Vowels in a String to Uppercase
1.Start
2.Read the input string.
3.Call the convertVowels() function.
    1.Start
    2.Set i = 0.
    3.Repeat until the end of the string ('\0') is reached:
    4.Check if str[i] is 'a', 'e', 'i', 'o', or 'u'.
    5.If yes, convert it to uppercase by subtracting 32 from its ASCII value.
    6.Increment i.
    7.Return to the main function.
4.Display the modified string.
5.Stop