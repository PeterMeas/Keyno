#include "/Users/test/Desktop/User/include/user.h"

void User::enterUsername(){
std::cout << "Enter Username" << std::endl;
std::cin >> username;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cin.clear();
}

User::User (const std::string& username, const std::string& password){
    this->username = username;
    this->password = password;
}

std::string User::getUser() const{
    return username;
}

std::string User::getPass() const{
    return password;
}
