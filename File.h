#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
    public:
        // Constructor
        File(std::string name, std::string content, Date& date);
        
        // Member functions
        bool lessThan(const File& other) const;
        void print() const;
        void printContents() const;
    
    private:
        std::string name;
        std::string content;
        Date lastModified;
};

#endif // FILE_H
