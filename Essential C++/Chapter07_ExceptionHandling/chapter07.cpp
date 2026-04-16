// Chapter 7: Exception Handling
#include "chapter07.h"
#include <iostream>
#include <stdexcept>
#include <string>

// 7.1 Throwing an Exception
void demoThrowException() {
    std::cout << "\n[7.1] Throwing an Exception" << std::endl;
    try {
        // This variable represents whether our program logic succeeded or failed.
        // 'bool' is a type that can be true or false. Here, we start with true (success assumed).
        bool didMyProgramGoWell = true;

        // Simulate some processing. In a real program, this could be a loop over data, etc.
        while (didMyProgramGoWell) { // This loop runs while didMyProgramGoWell is true
            std::cout << "Processing...\n"; // Print a message to show we're 'working'
            // Let's say something goes wrongduring our processing, so we set our flag to false
            didMyProgramGoWell = false;
        }

        // After processing, check if everything went well
        if (didMyProgramGoWell == false) { // If our flag is false, something failed
            // Throw an exception to signal an error. This stops normal execution and jumps to 'catch'.
            throw std::runtime_error("Something went wrong!");
        }
    } catch (const std::exception& e) {
        // This block runs if an exception is thrown above.
        // 'e.what()' gives us the error message from the exception.
        std::cout << "Caught: " << e.what() << std::endl;
    }
}

// 7.2 Catching an Exception
void demoCatchException() {
    std::cout << "\n[7.2] Catching an Exception" << std::endl;
    try {
        // Throw an integer exception. This simulates an error with a value (here, 42).
        throw 42;
    } catch (int e) {
        // This block catches exceptions of type int.
        // 'e' is the value thrown above (42).
        std::cout << "Caught int: " << e << std::endl;
    }
}

// 7.3 Trying for an Exception
void mightThrow(bool shouldThrow) {
    // If shouldThrow is true, throw a logic_error exception with a message.
    if (shouldThrow)
        throw std::logic_error("Intentional error");
}
void demoTryForException() {
    std::cout << "\n[7.3] Try for Exception" << std::endl;
    try {
        // Call a function that might throw an exception.
        mightThrow(true); // Pass true to trigger the exception
    } catch (const std::logic_error& e) {
        // Catch logic_error exceptions and print the message.
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    }
}

// 7.4 Local Resource Management
class FileGuard {
public:
    // Constructor: runs when an object of FileGuard is created.
    FileGuard() { std::cout << "Resource acquired\n"; }
    // Destructor: runs automatically when the object goes out of scope (even if an exception is thrown).
    ~FileGuard() { std::cout << "Resource released\n"; }
};
void demoLocalResourceManagement() {
    std::cout << "\n[7.4] Local Resource Management" << std::endl;
    try {
        // Create a FileGuard object. Its constructor acquires a resource.
        FileGuard fg;
        // Simulate an error by throwing an exception.
        throw std::runtime_error("Oops");
        // When the exception is thrown, fg's destructor is called automatically, releasing the resource.
    } catch (...) {
        // Catch any exception (regardless of type).
        std::cout << "Exception caught, resource released automatically." << std::endl;
    }
}

// 7.5 The Standard Exceptions
void demoStandardExceptions() {
    std::cout << "\n[7.5] Standard Exceptions" << std::endl;
    try {
        // Try to access the second character of an empty string.
        // This will throw an out_of_range exception.
        std::string().at(1);
    } catch (const std::out_of_range& e) {
        // Catch the out_of_range exception and print its message.
        std::cout << "Caught out_of_range: " << e.what() << std::endl;
    }
}

void runChapter07() {
    std::cout << "\n[Chapter 7] Exception Handling Samples" << std::endl;
    demoThrowException();            // Show how to throw and catch an exception
    demoCatchException();            // Show catching a non-standard (int) exception
    demoTryForException();           // Show catching a custom exception from a function
    demoLocalResourceManagement();   // Show how destructors help manage resources with exceptions
    demoStandardExceptions();        // Show catching a standard library exception
}
