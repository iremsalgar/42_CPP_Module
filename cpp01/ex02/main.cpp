#include <iostream>

int main()
{
    std::string data = "HI THIS IS BRAIN";
    std::string *ptr = &data;
    std::string &ref = data;

    std::cout << "data: " << &data << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "ref: " << &ref << std::endl;
    std::cout << "data: " << data << std::endl;
    std::cout << "ptr: " << *ptr << std::endl;
    std::cout << "ref: " << ref << std::endl;
    return 0;
}