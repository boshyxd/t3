#include "File.h"
#include <iostream>

// Constructor
File::File(std::string name, std::string content, Date& date)
    : name(name), content(content), lastModified(date) {
}

// lessThan function
bool File::lessThan(const File& other) const {
    return lastModified.lessThan(other.lastModified);
}

// print function
void File::print() const {
    std::cout << "File: " << name << std::endl;
    std::cout << "Last modified: ";
    lastModified.print();
    std::cout << std::endl;
}

// printContents function
void File::printContents() const {
    print(); // Print metadata first
    std::cout << "Content: " << content << std::endl;
}
