#include "../include/user.h"


bool User::isUserValid(const std::string& username, const std::string& password){
    if((username.find (' ') != std::string::npos) && 
    password.find(' ') != std::string::npos)
    {
        std::cerr << "Spaces not allowed" << std::endl;
        return false;
    }
    return true;
}
void User::enterUsername(){
std::cout << "Enter Username" << std::endl;
std::cin >> username;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cin.clear();
}

User::User (const std::string& username, const std::string& password){
    
    if (isUserValid(username, password)){
    this->username = username;
    this->password = password;
    }
}

