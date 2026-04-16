# Essential C++ Sample Implementation

This project provides concise, well-organized sample code for each chapter of "Essential C++" by Stanley B. Lippman. Each chapter demonstrates the key topics using simple, clear examples in modern C++ (C++11+).

## Structure
- Each chapter is in its own folder under `Essential C++/`, with a single `.cpp` file and optional `.h` file.
- The `main.cpp` file provides a menu to run the sample code for any chapter.

## How to Build

```
g++ -std=c++11 -I. main.cpp \
  Essential\ C++/Chapter01_BasicProgramming/chapter01.cpp \
  Essential\ C++/Chapter02_ProceduralProgramming/chapter02.cpp \
  Essential\ C++/Chapter03_GenericProgramming/chapter03.cpp \
  Essential\ C++/Chapter04_ObjectBasedProgramming/chapter04.cpp \
  Essential\ C++/Chapter05_ObjectOrientedProgramming/chapter05.cpp \
  Essential\ C++/Chapter06_ProgrammingWithTemplates/chapter06.cpp \
  Essential\ C++/Chapter07_ExceptionHandling/chapter07.cpp \
  -o essential_cpp_sample
```

## How to Run

```
./essential_cpp_sample
```

## Notes
- Each chapter’s code is minimal and focused on demonstrating the concepts.
- No exercises or complex examples are included—just clear, direct samples.
- All code is original and for educational purposes only.