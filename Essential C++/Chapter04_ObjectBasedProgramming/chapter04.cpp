// Chapter 4: Object-Based Programming
#include "chapter04.h"
#include <iostream>
#include <string>

// 4.1 How to Implement a Class
class Person {
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void introduce() const {
        std::cout << "Hi, I'm " << name << ", age " << age << std::endl;
    }
private:
    std::string name;
    int age;
};
void demoClassImplementation() {
    std::cout << "\n[4.1] Implement a Class" << std::endl;
    Person p("Alice", 30);
    p.introduce();
}

// 4.2 What Are Class Constructors and the Class Destructor?
class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};
void demoConstructorsDestructors() {
    std::cout << "\n[4.2] Constructors and Destructors" << std::endl;
    Resource r;
}

// 4.3 What Are mutable and const?
class Counter {
public:
    void increment() const { ++calls; }
    int getCalls() const { return calls; }
private:
    mutable int calls = 0;
};
void demoMutableConst() {
    std::cout << "\n[4.3] mutable and const" << std::endl;
    Counter c;
    c.increment();
    std::cout << "Calls: " << c.getCalls() << std::endl;
}

// 4.4 What Is the this Pointer?
class DemoThis {
    int value;
public:
    DemoThis(int v) : value(v) {}
    void show() const { std::cout << "this->value = " << this->value << std::endl; }
};
void demoThisPointer() {
    std::cout << "\n[4.4] this Pointer" << std::endl;
    DemoThis d(42);
    d.show();
}

// 4.5 Static Class Members
class StaticDemo {
public:
    static int count;
    StaticDemo() { ++count; }
};
int StaticDemo::count = 0;
void demoStaticMembers() {
    std::cout << "\n[4.5] Static Class Members" << std::endl;
    StaticDemo a, b;
    std::cout << "StaticDemo::count = " << StaticDemo::count << std::endl;
}

// 4.6 Building an Iterator Class (simple example)
class Range {
    int start, end;
public:
    Range(int s, int e) : start(s), end(e) {}
    class Iterator {
        int current;
    public:
        Iterator(int c) : current(c) {}
        int operator*() const { return current; }
        Iterator& operator++() { ++current; return *this; }
        bool operator!=(const Iterator& other) const { return current != other.current; }
    };
    Iterator begin() const { return Iterator(start); }
    Iterator end_() const { return Iterator(end); }
};
void demoIteratorClass() {
    std::cout << "\n[4.6] Iterator Class" << std::endl;
    Range r(1, 4);
    for (auto it = r.begin(); it != r.end_(); ++it) std::cout << *it << ' ';
    std::cout << std::endl;
}

// 4.7 Collaboration Sometimes Requires Friendship
class FriendDemo;
class FriendHelper {
public:
    void reveal(const FriendDemo&);
};
class FriendDemo {
    int secret = 123;
    friend class FriendHelper;
};
void FriendHelper::reveal(const FriendDemo& f) {
    std::cout << "Friend can access secret: " << f.secret << std::endl;
}
void demoFriendship() {
    std::cout << "\n[4.7] Friendship" << std::endl;
    FriendDemo d;
    FriendHelper h;
    h.reveal(d);
}

// 4.8 Implementing a Copy Assignment Operator
class CopyDemo {
public:
    int value;
    CopyDemo(int v) : value(v) {}
    CopyDemo& operator=(const CopyDemo& other) {
        value = other.value;
        return *this;
    }
};
void demoCopyAssignment() {
    std::cout << "\n[4.8] Copy Assignment" << std::endl;
    CopyDemo a(1), b(2);
    a = b;
    std::cout << "a.value = " << a.value << std::endl;
}

// 4.9 Implementing a Function Object
class Adder {
public:
    int operator()(int a, int b) const { return a + b; }
};
void demoFunctionObject() {
    std::cout << "\n[4.9] Function Object" << std::endl;
    Adder add;
    std::cout << "Adder(3, 4) = " << add(3, 4) << std::endl;
}

// 4.10 Providing Class Instances of the iostream Operators
class Printable {
    int data;
public:
    Printable(int d) : data(d) {}
    friend std::ostream& operator<<(std::ostream& os, const Printable& p) {
        return os << "Printable: " << p.data;
    }
};
void demoIOStreamOperators() {
    std::cout << "\n[4.10] iostream Operators" << std::endl;
    Printable p(77);
    std::cout << p << std::endl;
}

// 4.11 Pointers to Class Member Functions
class MemberPtrDemo {
public:
    void show() const { std::cout << "Member function called!" << std::endl; }
};
void demoMemberFunctionPointer() {
    std::cout << "\n[4.11] Pointer to Member Function" << std::endl;
    MemberPtrDemo obj;
    void (MemberPtrDemo::*fptr)() const = &MemberPtrDemo::show;
    (obj.*fptr)();
}

void runChapter04() {
    std::cout << "\n[Chapter 4] Object-Based Programming Samples" << std::endl;
    demoClassImplementation();
    demoConstructorsDestructors();
    demoMutableConst();
    demoThisPointer();
    demoStaticMembers();
    demoIteratorClass();
    demoFriendship();
    demoCopyAssignment();
    demoFunctionObject();
    demoIOStreamOperators();
    demoMemberFunctionPointer();
}
