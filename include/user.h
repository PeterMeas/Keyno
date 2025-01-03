#ifndef USER_H
#define USER_H
/*Represents a user of the password manager.
Attributes: username, password (could store hashed or encrypted versions),
and possibly email or securityQuestions for recovery.
Methods: createUser(), deleteUser(), etc. */
#include "auth.h"
#include <string>
#include <iostream>

class User{

    public:
    User(const std::string& username, const std::string& password);
    bool isUserValid(const std::string& username, const std::string& password);
    void enterUsername();
    std::string getUser() const { return username; } 
    std::string getPass() const { return password; }
    
    void createUser();
    void deleteUser();

    //listUsers();


    private:
    std::string username;
    std::string password;
};

#endif
