// Chapter 3: Generic Programming
#include "chapter03.h"
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>

// 3.1 The Arithmetic of Pointers
void demoPointerArithmetic() {
    std::cout << "\n[3.1] Pointer Arithmetic" << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr; // points to first element
    std::cout << "Array via pointer: ";
    for (int i = 0; i < 5; ++i) std::cout << *(p + i) << ' ';
    std::cout << std::endl;
}

// 3.2 Making Sense of Iterators
void demoIterators() {
    std::cout << "\n[3.2] Iterators" << std::endl;
    std::vector<int> v = {10, 20, 30};
    std::cout << "Vector via iterator: ";
    for (auto it = v.begin(); it != v.end(); ++it) std::cout << *it << ' ';
    std::cout << std::endl;
}

// 3.3 Operations Common to All Containers
void demoContainerOps() {
    std::cout << "\n[3.3] Container Operations" << std::endl;
    std::vector<int> v = {1, 2, 3};
    std::cout << "Size: " << v.size() << ", Empty: " << std::boolalpha << v.empty() << std::endl;
}

// 3.4 Using the Sequential Containers
void demoSequentialContainers() {
    std::cout << "\n[3.4] Sequential Containers" << std::endl;
    std::list<std::string> names = {"Ann", "Bob", "Cara"};
    std::cout << "List contents: ";
    for (const auto& n : names) std::cout << n << ' ';
    std::cout << std::endl;
}

// 3.5 Using the Generic Algorithms
void demoGenericAlgorithms() {
    std::cout << "\n[3.5] Generic Algorithms" << std::endl;
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto found = std::find(v.begin(), v.end(), 3);
    if (found != v.end()) std::cout << "Found 3 at index " << (found - v.begin()) << std::endl;
    else std::cout << "3 not found" << std::endl;
}

// 3.6 How to Design a Generic Algorithm
void demoCustomAlgorithm() {
    std::cout << "\n[3.6] Custom Generic Algorithm (count_if > 2)" << std::endl;
    std::vector<int> v = {1, 3, 5, 2, 4};
    int cnt = std::count_if(v.begin(), v.end(), [](int n){ return n > 2; });
    std::cout << cnt << " elements are greater than 2" << std::endl;
}

// 3.7 Using a Map
void demoMap() {
    std::cout << "\n[3.7] Map" << std::endl;
    std::map<std::string, int> ages = {{"Tom", 30}, {"Sue", 28}};
    for (const auto& kv : ages) std::cout << kv.first << ": " << kv.second << ", ";
    std::cout << std::endl;
}

// 3.8 Using a Set
void demoSet() {
    std::cout << "\n[3.8] Set" << std::endl;
    std::set<int> s = {1, 2, 2, 3};
    std::cout << "Set contents: ";
    for (int x : s) std::cout << x << ' ';
    std::cout << std::endl;
}

// 3.9 How to Use Iterator Inserters
void demoIteratorInserters() {
    std::cout << "\n[3.9] Iterator Inserters" << std::endl;
    std::set<int> s = {1, 2, 3};
    std::vector<int> v2;
    std::copy(s.begin(), s.end(), std::back_inserter(v2));
    std::cout << "Copied set to vector: ";
    for (int x : v2) std::cout << x << ' ';
    std::cout << std::endl;
}

// 3.10 Using the iostream Iterators
void demoIOStreamIterators() {
    std::cout << "\n[3.10] iostream Iterators" << std::endl;
    std::vector<int> v = {7, 8, 9};
    std::cout << "Vector to cout: ";
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << std::endl;
}

void runChapter03() {
    std::cout << "\n[Chapter 3] Generic Programming Samples" << std::endl;
    demoPointerArithmetic();
    demoIterators();
    demoContainerOps();
    demoSequentialContainers();
    demoGenericAlgorithms();
    demoCustomAlgorithm();
    demoMap();
    demoSet();
    demoIteratorInserters();
    demoIOStreamIterators();
}
