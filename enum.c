/*
Author: Constantine Lekkos
Purpose: Demonstration of enum type and its use with a general example
Created Date: 04/11/2023
*/

#include <stdio.h> // Library for Input and Output commands

int main() // A main function that the whole program is inside of it and defines an integer type to return -> int
{ // It's indicated that an enum type Variables is set with the indicative values inside the curly brackets

    // enum returns the integer starting from 0 and not the strings. Pay attention here! value3 is equal to 4
    enum Variables {value1, value2, value3 = 4, value4, value5};

    // Defining the varaibles
    enum Variables variable1, variable2, variable3, variable4;

    // Setting the valid values of the above variables
    variable1 = value1;
    variable2 = value2;
    variable3 = value3;
    variable4 = value4;

    // Printing the results and the \ is used to continue coding in a next line
    printf("Output Result:\n\nThe Variable 1 is: %d\nThe Variable 2 is: %d\n\
The Variable 3 is: %d\nThe Variable 4 is: %d\n\n", variable1, variable2, variable3, variable4);

    /* If you run it, the Output is:

    The Variable 1 is: 0
    The Variable 2 is: 1
    The Variable 3 is: 4
    The Variable 4 is: 5
    
    The variable 3 expected to be 2 with the way is sorted but as you remember, value3 = 4
    So, the C compiler continues counting from that value
    */
    
    // If the program runs with out a problem then it will return the 0 value of the main function
    return 0;
} // Feel free to play around and experiment yourself. Good luck!