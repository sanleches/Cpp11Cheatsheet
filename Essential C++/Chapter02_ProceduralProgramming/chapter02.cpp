
// Chapter 2: Procedural Programming
#include "chapter02.h" // Include the header file for function declarations
#include <iostream>    // Include the standard input/output stream library

// 2.1 How to Write a Function
// This function takes two integers as input and returns their sum.
// 'int' is the return type, 'a' and 'b' are parameters of type int.
int add(int a, int b) {
    // The 'return' statement gives back the result to the caller.
    return a + b; // Adds a and b, returns the result
}

// This function demonstrates how to call 'add' and print the result.
void demoWriteFunction() {
    // std::cout prints text to the console.
    // "<<" is the stream insertion operator, used to send data to std::cout.
    std::cout << "\n[2.1] Write a Function: add(3, 4) = " << add(3, 4) << std::endl;
    // std::endl ends the line and flushes the output buffer.
}

// 2.2 Invoking a Function
// This function shows how to use variables and call a function with them.
void demoInvokeFunction() {
    int x = 10, y = 5; // Declare and initialize two integers
    int result = add(x, y); // Call 'add' with x and y, store result
    std::cout << "\n[2.2] Invoking add(" << x << ", " << y << ") = " << result << std::endl;
}

// 2.3 Providing Default Parameter Values
// This function multiplies two integers. The second parameter has a default value of 2.
int multiply(int a, int b = 2) {
    // If the caller does not provide 'b', it will be 2 by default.
    return a * b;
}
void demoDefaultParameters() {
    // Call multiply with one argument (b defaults to 2)
    std::cout << "\n[2.3] Default Parameters: multiply(7) = " << multiply(7)
              << ", multiply(7, 3) = " << multiply(7, 3) << std::endl;
}

// 2.4 Using Local Static Objects
// This function uses a static variable to count how many times it has been called.
int staticCounter() {
    static int count = 0; // 'static' means the variable keeps its value between calls
    return ++count; // Increment count and return it
}
void demoLocalStaticObject() {
    // Call staticCounter twice to show the value increases
    std::cout << "\n[2.4] Local Static Object: call1 = " << staticCounter()
              << ", call2 = " << staticCounter() << std::endl;
}

// 2.5 Declaring a Function Inline
// 'inline' suggests to the compiler to insert the function code at the call site for efficiency.
inline int square(int x) {
    return x * x; // Returns x squared
}
void demoInlineFunction() {
    std::cout << "\n[2.5] Inline Function: square(6) = " << square(6) << std::endl;
}

// 2.6 Providing Overloaded Functions
// Function overloading: two functions with the same name but different parameter types.
double add(double a, double b) {
    return a + b; // Adds two doubles
}
void demoOverloadedFunctions() {
    // Calls the int version and the double version of add
    std::cout << "\n[2.6] Overloaded Functions: add(2, 3) = " << add(2, 3)
              << ", add(2.5, 3.1) = " << add(2.5, 3.1) << std::endl;
}

// 2.7 Defining and Using Template Functions
// 'template<typename T>' allows the function to work with any type T.
template<typename T>
T maxVal(T a, T b) {
    // Returns the greater of a and b using the '>' operator
    return (a > b) ? a : b; // The ternary operator: if a > b, return a, else b
}
void demoTemplateFunction() {
    // Calls maxVal with int and double types
    std::cout << "\n[2.7] Template Function: maxVal(8, 12) = " << maxVal(8, 12)
              << ", maxVal(3.14, 2.72) = " << maxVal(3.14, 2.72) << std::endl;
}

// 2.8 Pointers to Functions Add Flexibility
// 'FuncPtr' is a type alias for a pointer to a function taking two ints and returning int.
using FuncPtr = int(*)(int, int);
void demoFunctionPointer() {
    FuncPtr fp = add; // fp now points to the 'add' function
    int res = fp(100, 200); // Call the function via the pointer
    std::cout << "\n[2.8] Function Pointer: fp(100, 200) = " << res << std::endl;
}

// 2.9 Setting Up a Header File
// This function just prints a message. Its declaration is in chapter02.h.
void demoHeaderFile() {
    std::cout << "\n[2.9] Header File: This function is declared in chapter02.h" << std::endl;
}

// This function runs all the above demonstrations in order.
void runChapter02() {
    std::cout << "\n[Chapter 2] Procedural Programming Samples" << std::endl;
    demoWriteFunction();      // Show how to write a function
    demoInvokeFunction();     // Show how to call a function
    demoDefaultParameters();  // Show default parameter values
    demoLocalStaticObject();  // Show static local variable
    demoInlineFunction();     // Show inline function
    demoOverloadedFunctions();// Show function overloading
    demoTemplateFunction();   // Show template function
    demoFunctionPointer();    // Show function pointer
    demoHeaderFile();         // Show header file usage
}
