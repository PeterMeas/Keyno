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
    //addEntry
    //viewEntry();
    //deleteEntry();
    //updateEntry();
    //listAllEntry();
    //searchEntry


    private:
    std::vector<Password_Entry> entries;
};

#endif
