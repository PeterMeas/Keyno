#include "/Users/test/Desktop/User/include/password_entry.h"
#include "/Users/test/Desktop/User/include/utility.h"
#include <cstdio>
#include <iostream>
#include <vector>

// Check if this password entry belongs to the given user
bool Password_Entry::isUser(const User &user) const{
    return this->user.getUser() == user.getUser();
}

void Password_Entry::setPassword(const User& user, const std::string& newPassword)
{
    if (isUser(user)){
        password = newPassword;
    }else{
        std::cout <<"Error: Password entry not for this user!" << std::endl;
    }
   /*std::string newPass;
   std::cout<< "Enter Password" << std::endl;
   disableEcho();
   getline(std::cin, newPass);
   password = newPass;
   enableEcho();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   std::cin.clear();
*/
}

void Password_Entry::setNotes(const std::string& notes){
    this->notes.push_back(notes);
}
std::vector<std::string> Password_Entry::getNotes() const{
    return notes;
    /*std::cout << "Notes for: " << title << std::endl;
    for (auto& notes : this->notes){
        std::cout << "- " << notes << '\n';
        }*/
}

std::string Password_Entry::getTitle() const{
    return title;
}

std::string Password_Entry::getWebsite() const{
    return website;
}
std::string Password_Entry::getUsername() const{
    return username;
}
std::string Password_Entry::getPassword() const{
    return password;
}
