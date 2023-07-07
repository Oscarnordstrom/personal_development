#include <string>

class HasPtr {
public:
    // Default constructor
    HasPtr(const std::string& s = std::string()) : ps(new std::string(s)), i(0) {}

    // Copy constructor
    HasPtr(const HasPtr& other) : ps(new std::string(*other.ps)), i(other.i) {}

    // Copy-assignment operator
    HasPtr& operator=(const HasPtr& other) {
        // Check for self-assignment
        if (this != &other) {
            // Create a temporary copy of the right-hand side's string
            std::string* temp = new std::string(*other.ps);

            // Delete the old string
            delete ps;

            // Update the members with the new values
            ps = temp;
            i = other.i;
        }
        return *this;
    }

    // Destructor
    ~HasPtr() {
        delete ps;
    }

private:
    std::string* ps;  // pointer to string
    int i;           // some other data
};
