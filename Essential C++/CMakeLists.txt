cmake_minimum_required(VERSION 3.28)

project(EssentialCpp VERSION 1.0)

add_executable(EssentialCpp main.cpp)

target_sources(EssentialCpp
    PRIVATE
        main.cpp
        Chapter01_BasicProgramming/chapter01.cpp
        Chapter02_ProceduralProgramming/chapter02.cpp
        Chapter03_GenericProgramming/chapter03.cpp
        Chapter04_ObjectBasedProgramming/chapter04.cpp
        Chapter05_ObjectOrientedProgramming/chapter05.cpp
        Chapter06_ProgrammingWithTemplates/chapter06.cpp
        Chapter07_ExceptionHandling/chapter07.cpp
)

configure_file(config.h.in config.h)

include_directories(${CMAKE_CURRENT_BINARY_DIR})