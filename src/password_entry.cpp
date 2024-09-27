#include "/Users/test/Desktop/User/include/password_entry.h"
#include <cstdio>
#include <iostream>

std::string Password_Entry::setNotes(const std::string& notes){
    this->notes.push_back(notes);
}
std::string Password_Entry::getNotes() const{
    std::cout << "Notes for: " << title << std::endl;
    for (auto& notes : this->notes){
        std::cout << "- " << notes << '\n';
    }
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
