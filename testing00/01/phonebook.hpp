#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        Contact();
        ~Contact();

        bool set_FirstName(std::string &FirstName);
        std::string get_FirstName();

        bool set_LastName(std::string &LastName);
        std::string get_LastName();

        bool set_NickName(std::string &NickName);
        std::string get_NickName();

        bool set_DarkestSecret(std::string &DarkestSecret);
        std::string get_DarkestSecret();

        bool set_PhoneNumber(std::string &PhoneNumber);
        std::string get_PhoneNumber();
};

class Phonebook
{
    private:
        Contact contacts[8];
    public:
        Phonebook();
        ~Phonebook();
};

#endif