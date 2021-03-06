#include "Phonebook.hpp"
#include "Oldphone.hpp"

Phonebook::Phonebook() {
    index = 0;
    max = false;
}

Phonebook::~Phonebook() {}

void Phonebook::addContact() {
    std::string s1;

    contacts[index].setIndex(index + 1);

    std::cout << "Please, enter First Name: " << std::endl;
    std::getline(std::cin, s1);
    contacts[index].setFirstName(s1);

    std::cout << "Pleas, enter Last Name: " << std::endl;
    std::getline(std::cin, s1);
    contacts[index].setLastName(s1);

    std::cout << "Please, enter Nickname: " << std::endl;
    std::getline(std::cin, s1);
    contacts[index].setNickName(s1);

    std::cout << "Please, enter Phone number: " << std::endl;
    std::getline(std::cin, s1);
    contacts[index].setPhoneNumber(s1);

    std::cout << "Please, enter the Darkest Secret: " << std::endl;
    std::getline(std::cin, s1);
    contacts[index].setDarkestSecret(s1);

    std::string blancLine = contacts[index].getFirstName() + contacts[index].getLastName() +
        contacts[index].getNickName() + contacts[index].getPhoneNumber() + contacts[index].getDarkestSecret();
    if (blancLine.empty()) {
        std::cout << "Nothing" << std::endl;
    }
    else
        std::cout << "New contact" << std::endl;

    if (index < 7)
        index++;
    else {
        max = true;
        index = 0;
    }
}

void Phonebook::searchContact() {
    std::string number;
    int num;

    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|" << std::setw(10) << "index";
    std::cout << "|" << std::setw(10) << "first name";
    std::cout << "|" << std::setw(10) << "last name";
    std::cout << "|" << std::setw(10) << "nickname" << "|";
    std::cout << std::endl << "|-------------------------------------------|" << std::endl;

    int max;
    max = this->max ? 8 : index;
    for (int i = 0; i < max; i++) {
        std::cout << "|" << std::setw(10) << contacts[i].getIndex();
        if (contacts[i].getFirstName().size() > 10)
            std::cout << "|" << std::setw(9) << contacts[i].getFirstName().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << contacts[i].getFirstName();
        if (contacts[i].getLastName().size() > 10)
            std::cout << "|" << std::setw(9) << contacts[i].getLastName().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << contacts[i].getLastName();
        if (contacts[i].getNickName().size() > 10)
            std::cout << "|" << std::setw(9) << contacts[i].getNickName().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << contacts[i].getNickName();
        if (contacts[i].getFirstName().size() > 10)
            std::cout << "|" << std::setw(9) << contacts[i].getFirstName().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << contacts[i].getFirstName();
        std::cout << "|" << std::endl;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "Enter " << "Index" << " of the contact: " << std::endl;
    std::getline(std::cin, number);
    num = atoi(number.c_str());
    if (num < 1 || num > max)
        std::cout << "There is no such index. There are " << max << " contacts" << std::endl;
    else 
        this->informationAboutContact(num - 1);

}

void Phonebook::informationAboutContact(int index) { 
    std::cout << "Info about contact " << index + 1 << std::endl;
    std::cout << "First name:     " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name:      " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname:       " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone number:   " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}