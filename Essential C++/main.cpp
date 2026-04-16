// Essential C++ Sample Implementation
// Main entry point and menu
#include <iostream>
#include "Chapter01_BasicProgramming/chapter01.h"
#include "Chapter02_ProceduralProgramming/chapter02.h"
#include "Chapter03_GenericProgramming/chapter03.h"
#include "Chapter04_ObjectBasedProgramming/chapter04.h"
#include "Chapter05_ObjectOrientedProgramming/chapter05.h"
#include "Chapter06_ProgrammingWithTemplates/chapter06.h"
#include "Chapter07_ExceptionHandling/chapter07.h"

void printMenu() {
    std::cout << "\nEssential C++ Sample Menu\n";
    std::cout << "1. Chapter 1: Basic Programming\n";
    std::cout << "2. Chapter 2: Procedural Programming\n";
    std::cout << "3. Chapter 3: Generic Programming\n";
    std::cout << "4. Chapter 4: Object-Based Programming\n";
    std::cout << "5. Chapter 5: Object-Oriented Programming\n";
    std::cout << "6. Chapter 6: Programming with Templates\n";
    std::cout << "7. Chapter 7: Exception Handling\n";
    std::cout << "0. Exit\n";
}

int main() {
    int choice = -1;
    do {
        printMenu();
        std::cout << "Select a chapter: ";
        std::cin >> choice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }
        switch (choice) {
            case 1: runChapter01(); break;
            case 2: runChapter02(); break;
            case 3: runChapter03(); break;
            case 4: runChapter04(); break;
            case 5: runChapter05(); break;
            case 6: runChapter06(); break;
            case 7: runChapter07(); break;
            case 0: std::cout << "Exiting.\n"; break;
            default: std::cout << "Invalid choice.\n";
        }
    } while (choice != 0);
    return 0;
}
