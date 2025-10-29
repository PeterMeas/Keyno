#include "../include/user.h"


void User::createUser(const std::string& username, const std::string& password, const std::string& filePath){
    std::ofstream file(filePath, std::ios::app); 
    if (file.is_open()){
        file << username << " " << password << "\n";
        file.close();
        std::cout << "User created successfully" << std::endl;
    }else{
        std::cerr << "Error: unable to open file. User was not created successfully" << std::endl;
    }
}

void User::deleteUser(const std::string& username, const std::string& filePath){
    std::ifstream file(filePath);
    if (!file.is_open()){
        std::cerr << "Error: unable to open file" << std::endl;
        return;
    }

    std::vector<std::pair<std::string, std::string>> users;
    std::string usr, pwd;
    while (file >> usr >> pwd){
        if (usr != username){ //skip user to be deleted
        users.emplace_back(usr,pwd);
        }
    }
    file.close();

    std::ofstream outFile(filePath);
    if(outFile.is_open()){
        for (const auto& user: users){
            outFile << user.first << " " << user.second << std::endl;
        }
        outFile.close();
        std::cout << "User was deleted" << std::endl;
    }
    else{
        std::cerr << "Error: unable to write file" << std::endl;
    }
}

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

