#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H
//Responsible for storing, retrieving, and managing passwords.
#include "password_entry.h"
#include "user.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class Password_Manager{

    public:
    //Password_Manager(): 
    void addPassword(const User& user, const std::string& title, const std::string& website, const std::string& username, const std::string& password);
    Password_Entry getEntry(const int index);
    //viewEntry();
    //deleteEntry();
    //updateEntry();
    //listAllEntry();
    //searchEntry


    private:
    std::vector<Password_Entry> stored_passwords;
};

#endif
