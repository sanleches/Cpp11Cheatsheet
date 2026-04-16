// Chapter 6: Programming with Templates
#include "chapter06.h"
#include <iostream>
#include <string>

// 6.1 Parameterized Types
template<typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() const { return value; }
};
void demoParameterizedTypes() {
    std::cout << "\n[6.1] Parameterized Types" << std::endl;
    Box<int> b(42);
    std::cout << "Box<int>: " << b.get() << std::endl;
}

// 6.2 The Template Class Definition
void demoTemplateClassDefinition() {
    std::cout << "\n[6.2] Template Class Definition" << std::endl;
    Box<std::string> b("hello");
    std::cout << "Box<string>: " << b.get() << std::endl;
}

// 6.3 Handling Template Type Parameters
template<typename T>
T addT(T a, T b) { return a + b; }
void demoTemplateTypeParameters() {
    std::cout << "\n[6.3] Template Type Parameters" << std::endl;
    std::cout << "addT(2, 3): " << addT(2, 3) << ", addT(1.1, 2.2): " << addT(1.1, 2.2) << std::endl;
}

// 6.4 Implementing the Template Class
void demoTemplateClassImplementation() {
    std::cout << "\n[6.4] Template Class Implementation" << std::endl;
    Box<double> b(3.14);
    std::cout << "Box<double>: " << b.get() << std::endl;
}

// 6.5 A Function Template Output Operator
template<typename T>
void printBox(const Box<T>& b) {
    std::cout << "Box: " << b.get() << std::endl;
}
void demoFunctionTemplateOutputOperator() {
    std::cout << "\n[6.5] Function Template Output Operator" << std::endl;
    Box<int> b(99);
    printBox(b);
}

// 6.6 Constant Expressions and Default Parameters
template<typename T, int N = 5>
class Array {
    T data[N];
public:
    Array() { for (int i = 0; i < N; ++i) data[i] = T(); }
    int size() const { return N; }
};
void demoConstExprDefaultParams() {
    std::cout << "\n[6.6] Constexpr and Default Params" << std::endl;
    Array<int> arr;
    std::cout << "Array<int> size: " << arr.size() << std::endl;
}

// 6.7 Template Parameters as Strategy
template<typename T, typename Compare>
T minVal(T a, T b, Compare comp) { return comp(a, b) ? a : b; }
void demoTemplateParamsAsStrategy() {
    std::cout << "\n[6.7] Template Parameters as Strategy" << std::endl;
    auto less = [](int a, int b) { return a < b; };
    std::cout << "minVal(3, 7): " << minVal(3, 7, less) << std::endl;
}

// 6.8 Member Template Functions
class Container {
public:
    template<typename T>
    void show(const T& t) { std::cout << "Container holds: " << t << std::endl; }
};
void demoMemberTemplateFunctions() {
    std::cout << "\n[6.8] Member Template Functions" << std::endl;
    Container c;
    c.show(123);
    c.show("abc");
}

void runChapter06() {
    std::cout << "\n[Chapter 6] Programming with Templates Samples" << std::endl;
    demoParameterizedTypes();
    demoTemplateClassDefinition();
    demoTemplateTypeParameters();
    demoTemplateClassImplementation();
    demoFunctionTemplateOutputOperator();
    demoConstExprDefaultParams();
    demoTemplateParamsAsStrategy();
    demoMemberTemplateFunctions();
}
