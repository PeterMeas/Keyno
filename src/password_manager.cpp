#include "/Users/test/Desktop/User/include/password_manager.h"
#include "/Users/test/Desktop/User/include/utility.h"
#include <iostream>

void Password_Manager::enterPassword(User& username)
{
   std::string newPass;
   std::cout<< "Enter Password" << std::endl;
   disableEcho();
   getline(std::cin, newPass);
   stored_passwords.push_back(newPass);
   enableEcho();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   std::cin.clear();

}

std::string Password_Manager::getPass() const{
       return stored_passwords.front();
   }

void Password_Manager::addPassword(const std::string& website, const std::string& username, const std::string& password){
    //encrypt password using OpenSSL ;library

}
