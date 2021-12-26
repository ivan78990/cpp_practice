#include "Oldphone.hpp"

Oldphone::Oldphone(){}

Oldphone::~Oldphone(){}

void Oldphone::setIndex(int index)
{
    this->index = index;
}

int Oldphone::getIndex()
{
    return index;
}

void Oldphone::setFirstName(std::string first_name)
{
    this->first_name = first_name;
}

std::string Oldphone::getFirstName()
{
    return first_name;
}

void Oldphone::setLastName(std::string last_name)
{
    this->last_name = last_name;
}

std::string Oldphone::getLastName()
{
    return last_name;
}

void Oldphone::setNickName(std::string nickname)
{
    this->nickname = nickname;
}

std::string Oldphone::getNickName()
{
    return nickname;
}

void Oldphone::setPhoneNumber(std::string phone_number)
{
    this->phone_number = phone_number;
}

std::string Oldphone::getPhoneNumber()
{
    return phone_number;
}

void Oldphone::setDarkestSecret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Oldphone::getDarkestSecret()
{
    return darkest_secret;
}