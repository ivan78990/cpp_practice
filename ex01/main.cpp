#include "Oldphone.hpp"
#include "Phonebook.hpp"

int main(void) {

    std::string option;
    Phonebook phonebook;

    std::cout << "Please, enter ADD, SEARCH or EXIT" << std::endl;
    while (option != "EXIT") {
        std::cout << "Enter ADD, SEARCH or EXIT: ";
        std::getline(std::cin, option);
        if (std::cin.eof())
            exit(1);
        if (option == "ADD")
            phonebook.addContact();
        else if (option == "SEARCH")
            phonebook.searchContact();
        else
            if (option != "EXIT") {
                std::cout << "Incorrect option!" << std::endl;
            }
            else
                std::cout << "Exit phonebook" << std::endl;

    }
    return 0;
}