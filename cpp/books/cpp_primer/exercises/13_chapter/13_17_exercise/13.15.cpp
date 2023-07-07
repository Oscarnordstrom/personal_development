#include <iostream>

class numbered {
public:
    numbered() : mysn(generateSerialNumber()) {}
    numbered(const numbered&) : mysn(generateSerialNumber()) {}
    int mysn;
private:
    static int generateSerialNumber() {
        static int serialNumber = 0;
        return ++serialNumber;
    }
};

void f(numbered s) {
    std::cout << s.mysn << std::endl;
}
