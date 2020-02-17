#include <iostream>
#include <string>

const std::string OUTPUT_BREAK = "\n";

class thing {

    std::string name = "";

public:

    thing(std::string inName) : name(inName) {}
    std::string getName() { return  name; }

};


int main() {

    /**
    thing refToThing("refToThing");

    thing* ptrToThing = new thing("ptrToThing");

    std::cout << refToThing.getName() << std::endl;
    std::cout << ptrToThing->getName() << std::endl;
    */

    int num = 3;
    std::cout << "num holds " << num << std::endl;
    std::cout << "num address " << &num << std::endl;

    int* ptrToNum = &num;
    std::cout << "ptrToNum holds " << ptrToNum << std::endl;
    std::cout << "ptrToNum is at " << &ptrToNum << std::endl;
    std::cout << "ptrToNum indirection is " << *ptrToNum << std::endl;

    int& refToNum = num;
    std::cout << "refToNum holds " << refToNum << std::endl;
    std::cout << "ptrToNum is at " << &refToNum << std::endl;

    std::cout << OUTPUT_BREAK; // new tests

    num = 500;
    std::cout << "num holds " << num << std::endl;
    std::cout << "ptrToNum indirection is " << *ptrToNum << std::endl;
    std::cout << "refToNum holds " << refToNum << std::endl;

    std::cout << OUTPUT_BREAK; // new tests

    int num2 = 502;
    std::cout << "Num2 holds " << num2 << std::endl;
    std::cout << "Num2 is at " << &num2 << std::endl;

    ptrToNum = &num2; // pointers eat addresses
    std::cout << "ptrToNum holds " << ptrToNum << std::endl;
    std::cout << "ptrToNum is at " << &ptrToNum << std::endl;
    std::cout << "ptrToNum indirection is " << *ptrToNum << std::endl;

    refToNum = num2; // TODO why did it let me reassign a ref
    std::cout << "refToNum holds " << refToNum << std::endl;
    std::cout << "ptrToNum is at " << &refToNum << std::endl;

    std::cout << OUTPUT_BREAK; // new tests

    refToNum++;
    std::cout << "Num2 holds " << num2 << std::endl;


    return 0;
}
