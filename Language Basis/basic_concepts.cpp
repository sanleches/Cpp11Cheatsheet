
/*
Comments:

Well start with both comment samples 
*/

/*
Long/multi-line comment.
*/

// Single line comment.

/**
Although it is not part of the C++ standard, 
This comment style is often used for documentation purposes, especially with tools like Doxygen.
*/


#include <iostream>


int main(int argc, char* argv[]) {
    char c = ' ';

    while(c <= '~') {
            std::cout << c << " ";
            c++;
    }
    std::cout << "\n The end.";
    return 0;

}