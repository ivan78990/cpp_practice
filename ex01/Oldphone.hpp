#ifndef OLDPHONE_HPP
# define OLDPHONE_HPP
#include <iostream>
#include <string>

class Oldphone {

private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Oldphone();
    ~Oldphone();
    void setIndex(int index);
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setNickName(std::string nickname);
    void setPhoneNumber(std::string phone_number);
    void setDarkestSecret(std::string darkest_secret);
    int  getIndex();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};

#endif