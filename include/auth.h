#ifndef AUTH_H
#define AUTH_H
//Manage auth keys or tokens

#include <string>
#include <iostream>
#include <fstream>

class Auth{

    public:

    void setAuthToken();
    void validateAuthToken();
    std::string getAuthToken() const;
    void saveAuthDetails(const std::string& username, const std::string& password, const std::string& authToken);
    bool loadAuthDetails( std::string& username,  std::string& password,  std::string& authToken);

    private:
    std::string auth;
    std::string refreshToken;
};


#endif
