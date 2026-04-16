
// Chapter 1: Basic C++ Programming
// Demonstrates basic C++ concepts from Essential C++
#include "chapter01.h"      // Include the header file for function declarations
#include <iostream>         // Include the standard input/output stream library
#include <vector>           // Include the vector container from the STL
#include <fstream>          // Include file stream classes for file I/O
#include <string>           // Include the string class

// 1.1 How to Write a C++ Program
// This function prints "Hello, World!" to the console.
void demoHelloWorld() {
    std::cout << "\n[1.1] Hello World Example" << std::endl; // Print a section header
    std::cout << "Hello, World!\n"; // Print the classic hello message
}

// 1.2 Defining and Initializing a Data Object
// This function demonstrates how to declare and initialize variables of different types.
void demoDataObject() {
    std::cout << "\n[1.2] Defining and Initializing a Data Object" << std::endl;
    int age = 25; // Declare an integer variable and set it to 25
    double temperature = 36.6; // Declare a double variable and set it to 36.6
    std::string name = "Alice"; // Declare a string variable and set it to "Alice"
    // Print all variables
    std::cout << "Name: " << name << ", Age: " << age << ", Temperature: " << temperature << std::endl;
}

// 1.3 Writing Expressions
// This function shows how to use arithmetic expressions and print their results.
void demoExpressions() {
    std::cout << "\n[1.3] Writing Expressions" << std::endl;
    int a = 5, b = 3; // Declare and initialize two integers
    int sum = a + b; // Add a and b
    int product = a * b; // Multiply a and b
    double average = (a + b) / 2.0; // Compute the average (note the .0 for floating point division)
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Sum: " << sum << ", Product: " << product << ", Average: " << average << std::endl;
}

// 1.4 Writing Conditional and Loop Statements
// This function demonstrates if-else and for loop constructs.
void demoConditionalsAndLoops() {
    std::cout << "\n[1.4] Conditionals and Loops" << std::endl;
    int score = 87; // Example score
    // Use if-else to determine grade
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else {
        std::cout << "Grade: C or below" << std::endl;
    }
    // Use a for loop to count down from 5
    std::cout << "Counting down from 5: ";
    for (int i = 5; i > 0; --i) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

// 1.5 How to Use Arrays and Vectors
// This function demonstrates the use of arrays and vectors.
void demoArraysAndVectors() {
    std::cout << "\n[1.5] Arrays and Vectors" << std::endl;
    int arr[4] = {10, 20, 30, 40}; // Declare and initialize an array of 4 integers
    std::cout << "Array contents: ";
    for (int i = 0; i < 4; ++i) // Loop through the array
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
    // Declare and initialize a vector of strings
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};
    std::cout << "Vector contents: ";
    for (const auto& fruit : fruits) // Range-based for loop
        std::cout << fruit << ' ';
    std::cout << std::endl;
}

// 1.6 Pointers Allow for Flexibility
// This function demonstrates the basics of pointers.
void demoPointers() {
    std::cout << "\n[1.6] Pointers" << std::endl;
    int value = 99; // Declare an integer
    int* ptr = &value; // Declare a pointer to int and assign it the address of value
    // Print the value, its address, and the value via the pointer
    std::cout << "Value: " << value << ", Address: " << ptr << ", Value via pointer: " << *ptr << std::endl;
    *ptr = 123; // Change the value via the pointer
    std::cout << "Value after modification via pointer: " << value << std::endl;
}

// 1.7 Writing and Reading Files
// This function demonstrates basic file output and input.
void demoFileIO() {
    std::cout << "\n[1.7] File I/O" << std::endl;
    std::string filename = "chapter01_sample.txt"; // Name of the file to write/read
    // Write to file
    std::ofstream out(filename); // Create an output file stream
    if (out) { // Check if the file opened successfully
        out << "This is a line written to the file." << std::endl; // Write a line
        out.close(); // Close the file
        std::cout << "Wrote to file: " << filename << std::endl;
    }
    // Read from file
    std::ifstream in(filename); // Create an input file stream
    if (in) { // Check if the file opened successfully
        std::string line;
        std::getline(in, line); // Read a line from the file
        std::cout << "Read from file: " << line << std::endl;
        in.close(); // Close the file
    }
}

// This function runs all the above demonstrations in order.
void runChapter01() {
    std::cout << "\n[Chapter 1] Basic C++ Programming Samples" << std::endl;
    demoHelloWorld();           // Show Hello World
    demoDataObject();           // Show variable declaration and initialization
    demoExpressions();          // Show arithmetic expressions
    demoConditionalsAndLoops(); // Show conditionals and loops
    demoArraysAndVectors();     // Show arrays and vectors
    demoPointers();             // Show pointers
    demoFileIO();               // Show file I/O
}
