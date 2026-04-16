
/*
 * Conditional Compilation in C++
 * --------------------------------
 * Think of conditional compilation as a set of switches that tell the compiler which code to include or ignore.
 * This happens during preprocessing, before syntax checking or compilation.
 */

// -----------------------------------------------------------------------------
// 1. Definition Checks: #ifdef and #ifndef
// -----------------------------------------------------------------------------
// Use these to check if a macro is defined.
// #ifdef: Compile block if macro exists (commonly for features/platforms)
// #ifndef: Compile block if macro does NOT exist (commonly for header guards)

#ifndef MY_HEADER_H
#define MY_HEADER_H

// Everything here only gets compiled once
void myFunction();

#endif // MY_HEADER_H

// -----------------------------------------------------------------------------
// 2. Logic Checks: #if, #elif, #else
// -----------------------------------------------------------------------------
// #if evaluates constant expressions at compile-time.
// Common for platform-specific code.

#if defined(_WIN32)
#   include <windows.h> // Windows-specific code library
#   define CLEAR_SCREEN "cls" // Command to clear screen in Windows
#elif defined(__linux__)
#   include <unistd.h> // Linux-specific code library
#   define CLEAR_SCREEN "clear" // Command to clear screen in Linux
#endif

int main() { //regular code that calls a command
    system(CLEAR_SCREEN); // Clear the screen using the platform-specific command
    return 0;
}

// -----------------------------------------------------------------------------
// 3. The "Kill Switch": #if 0
// -----------------------------------------------------------------------------
// Use #if 0 to comment out large blocks of code (handles nested comments!)

#if 0
    // This block is invisible to the compiler.
    complex_function_with_bugs();
#endif

#if 1
    // Change 0 to 1 to "activate" the code again!
    working_function();
#endif

// -----------------------------------------------------------------------------
// Summary Table
// -----------------------------------------------------------------------------
// | Directive | Meaning      | Condition for Code to Compile           |
// |-----------|-------------|-----------------------------------------|
// | #if       | If          | Expression must be non-zero (true)      |
// | #ifdef    | If Defined  | Macro must have been defined            |
// | #ifndef   | If Not Def. | Macro must NOT have been defined        |
// | #endif    | End If      | Marks end of any of the above blocks    |

/*
Why use these instead of regular if statements?
- Regular if statements are checked at runtime; preprocessor directives are checked at compile-time.
- Code excluded by #if/#ifdef/#ifndef is never compiled, making executables smaller and safer.
- Comments are removed before preprocessing, so you can safely put comments inside these blocks.
*/