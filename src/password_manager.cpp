#include "../include/password_manager.h"
#include "../include/utility.h"
#include <iostream>



void Password_Manager::addPassword(const User& user, const std::string& title, const std::string& website, const std::string& username, const std::string& password){
    Password_Entry newEntry(user, title, website, username, password);
    //encrypt password using OpenSSL ;library
    stored_passwords.push_back(newEntry); //store full entry
}

Password_Entry Password_Manager::getEntry(const int index){
       return stored_passwords.at(index); //return entire password entry object
   }
