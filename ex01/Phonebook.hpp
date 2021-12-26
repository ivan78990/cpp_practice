#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Oldphone.hpp"
#include <stdlib.h>

class Phonebook {

private:
    int index;
    bool max;
    Oldphone contacts[8];

public:
    Phonebook();
    ~Phonebook();
    void addContact();
    void searchContact();
    void informationAboutContact(int index);
};

#endif