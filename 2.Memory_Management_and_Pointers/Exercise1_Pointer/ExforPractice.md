1. Basic Pointer Declaration and Value Assignment
- Objective: Write a C program to declare an integer variable, assign a value to it, and then print its address and value using a pointer.
- Requirements:
    * Declare an integer variable and assign it a value.
    * Declare a pointer to an integer and make it point to the integer variable.
    * Print the value of the integer using both the variable and the pointer.
- Example Output:
```
Value of integer: 10
Address of integer: 0x7ffdbd944690
Value of integer using pointer: 10
```
2. Swapping Two Numbers Using Pointers
- Objective: Write a C program to swap the values of two integers using pointers.
- Requirements:
    * Write a function that takes pointers to two integers and swaps their values.
    * In the main function, declare two integers, assign them values, and call the swap function.
- Example Output:
```
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5
```
3. Array Access Using Pointers
- Objective: Write a program to access elements of an array using a pointer.
- Requirements:
    * Declare an integer array and assign values to it.
    * Use a pointer to iterate over the array and print each element.
- Example Output:
```
Array elements: 1 2 3 4 5
```
4. Pointer Arithmetic
- Objective: Write a C program that demonstrates pointer arithmetic.
- Requirements:
    * Declare an integer array and initialize it with some values.
    * Use a pointer to access elements by incrementing the pointer.
    * Print each element of the array by moving the pointer.
- Example Output:
```
Array elements: 10 20 30 40 50
```
5. Finding the Maximum Element in an Array Using Pointers
- Objective: Write a C program to find the maximum value in an array using a pointer.
- Requirements:
    * Pass an array to a function using a pointer.
    * Find the maximum element in the array within the function and return it.
- Example Output:
```
Maximum value in the array: 98
```
6. Dynamic Memory Allocation Using Pointers
- Objective: Write a C program to dynamically allocate memory for an array of integers, take input for each element, and print them.
- Requirements:
    * Use malloc to allocate memory for an integer array.
    * Prompt the user to enter values and store them in the allocated memory.
    * Print the entered values and then free the allocated memory.
- Example Output:
```
Enter number of elements: 5
Enter 5 numbers: 1 2 3 4 5
Array elements are: 1 2 3 4 5
```
7. String Manipulation Using Pointers
- Objective: Write a program to reverse a string using pointers.
- Requirements:
    * Declare a character array and initialize it with a string.
    * Use pointers to swap characters from the beginning and end of the string until you reach the middle.
    * Print the reversed string.
- Example Output:
```
Original string: Hello
Reversed string: olleH
```
8. Counting Vowels in a String Using Pointers
- Objective: Write a program to count the number of vowels in a string using pointers.
- Requirements:
    * Use a pointer to iterate over each character in the string.
    * Check if each character is a vowel and keep a count.
    * Print the count of vowels.
- Example Output:
```
Enter a string: Hello World
Number of vowels: 3
```