#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _readInput(void) const;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(void);
        void printContact(void) const;
        void search(void) const;
        void welcome(void) const;
};
#endif