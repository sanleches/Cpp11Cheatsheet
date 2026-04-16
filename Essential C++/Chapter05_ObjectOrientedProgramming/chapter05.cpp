// Chapter 5: Object-Oriented Programming
#include "chapter05.h"
#include <iostream>
#include <string>

// 5.1 Object-Oriented Programming Concepts
class Animal {
public:
    virtual void speak() const { std::cout << "Animal sound" << std::endl; }
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    void speak() const override { std::cout << "Woof!" << std::endl; }
};
void demoOOPConcepts() {
    std::cout << "\n[5.1] OOP Concepts" << std::endl;
    Animal* a = new Dog();
    a->speak();
    delete a;
}

// 5.2 A Tour of Object-Oriented Programming
void demoOOPTour() {
    std::cout << "\n[5.2] OOP Tour" << std::endl;
    Dog d;
    d.speak();
}

// 5.3 Polymorphism without Inheritance
class Quack {
public:
    void operator()() const { std::cout << "Quack!" << std::endl; }
};
void demoPolymorphismNoInheritance() {
    std::cout << "\n[5.3] Polymorphism without Inheritance" << std::endl;
    Quack q;
    q();
}

// 5.4 Defining an Abstract Base Class
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};
class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override { return side * side; }
};
void demoAbstractBaseClass() {
    std::cout << "\n[5.4] Abstract Base Class" << std::endl;
    Shape* s = new Square(3);
    std::cout << "Area: " << s->area() << std::endl;
    delete s;
}

// 5.5 Defining a Derived Class
class Base {
public:
    virtual void show() const { std::cout << "Base" << std::endl; }
};
class Derived : public Base {
public:
    void show() const override { std::cout << "Derived" << std::endl; }
};
void demoDerivedClass() {
    std::cout << "\n[5.5] Derived Class" << std::endl;
    Derived d;
    d.show();
}

// 5.6 Using an Inheritance Hierarchy
void demoInheritanceHierarchy() {
    std::cout << "\n[5.6] Inheritance Hierarchy" << std::endl;
    Base* b = new Derived();
    b->show();
    delete b;
}

// 5.7 How Abstract Should a Base Class Be?
void demoAbstractBaseDiscussion() {
    std::cout << "\n[5.7] Abstract Base Class Discussion" << std::endl;
    std::cout << "Abstract base classes should only provide interface, not implementation." << std::endl;
}

// 5.8 Initialization, Destruction, and Copy
class Copyable {
public:
    int x;
    Copyable(int v) : x(v) {}
    Copyable(const Copyable& c) : x(c.x) { std::cout << "Copied!\n"; }
    ~Copyable() { std::cout << "Destroyed!\n"; }
};
void demoInitDestructCopy() {
    std::cout << "\n[5.8] Initialization, Destruction, Copy" << std::endl;
    Copyable a(5);
    Copyable b = a;
}

// 5.9 Defining a Derived Class Virtual Function
class VirtualDemo : public Base {
public:
    void show() const override { std::cout << "VirtualDemo" << std::endl; }
};
void demoDerivedVirtualFunction() {
    std::cout << "\n[5.9] Derived Class Virtual Function" << std::endl;
    VirtualDemo v;
    v.show();
}

// 5.10 Run-Time Type Identification
#include <typeinfo>
void demoRTTI() {
    std::cout << "\n[5.10] Run-Time Type Identification" << std::endl;
    Base* b = new VirtualDemo();
    std::cout << "Type: " << typeid(*b).name() << std::endl;
    delete b;
}

void runChapter05() {
    std::cout << "\n[Chapter 5] Object-Oriented Programming Samples" << std::endl;
    demoOOPConcepts();
    demoOOPTour();
    demoPolymorphismNoInheritance();
    demoAbstractBaseClass();
    demoDerivedClass();
    demoInheritanceHierarchy();
    demoAbstractBaseDiscussion();
    demoInitDestructCopy();
    demoDerivedVirtualFunction();
    demoRTTI();
}
