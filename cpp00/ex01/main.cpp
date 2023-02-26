#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    PhoneBook book;
    std::string input = "";
    book.welcome();
    while (input.compare("EXIT"))
    {
        std::cout << "> " << std::flush;
        std::cin >> input;
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0) 
        {
            book.printContact();
            book.search();
        }
        else
            std::cout << "Error command!" << std::endl;
    }
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}