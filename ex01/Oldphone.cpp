#include "Oldphone.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::setIndex(int index)
{
    this->index = index;
}

int Contact::getIndex()
{
    return index;
}

void Contact::setFirstName(std::string first_name)
{
    this->first_name = first_name;
}

std::string Contact::getFirstName()
{
    return first_name;
}

void Contact::setLastName(std::string last_name)
{
    this->last_name = last_name;
}