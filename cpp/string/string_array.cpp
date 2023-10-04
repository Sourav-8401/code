#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declare a vector of strings
    std::vector<std::string> dynamicArray;

    // Test Case 1: Adding strings to the vector
    dynamicArray.push_back("Hello");
    dynamicArray.push_back("World");

    // Test Case 2: Accessing and printing the strings in the vector
    std::cout << "Test Case 2: Elements in the vector:" << std::endl;
    for (const std::string& str : dynamicArray) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test Case 3: Adding more strings to the vector
    dynamicArray.push_back("How");
    dynamicArray.push_back("Are");
    dynamicArray.push_back("You");

    // Test Case 4: Accessing and printing the updated vector
    std::cout << "Test Case 4: Updated elements in the vector:" << std::endl;
    for (const std::string& str : dynamicArray) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    // Test Case 5: Check the size of the vector
    std::cout << "Test Case 5: Size of the vector: " << dynamicArray.size() << std::endl;

    return 0;
}
