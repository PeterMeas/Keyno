#include "../include/auth.h"
#include "../include/user.h"
//#include "/Users/test/Desktop/User/include/username.h"


#include <openssl/evp.h>
#include <openssl/aes.h>
#include <openssl/ssl.h>


#include "../include/password_manager.h"
#include "../include/utility.h"
#include "include/password_entry.h"
#include <fstream>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

inline void test_openssl(){

    std::cout << "OpenSSL version: " << OpenSSL_version(OPENSSL_VERSION) << std::endl;
    std::cout << "OpenSSL version number: " << OpenSSL_version_num() << std::endl;
    
    
}
int main(int argc, char* argv[])
{

    test_openssl();
   /*  std::string storedUser, storedPass, storedAuthToken;
    if (auth.loadAuthDetails(storedUser, storedPass, storedAuthToken)) {
        std::cout << "Credentials found, using stored authentication details." << std::endl;
        Peter.enterUsername();
        pass.enterPassword();
        auth.setAuthToken();

        if (storedUser == Peter.getUser() && storedPass == pass.getPass() && storedAuthToken == auth.getAuthToken()) {
            std::cout << "Authentication successful!\n";
        } else {
            std::cout << "Invalid authentication details\n";
        }
    } else {
        std::cerr << "No authentication data found, please enter your details.\n";
        Peter.enterUsername();
        pass.enterPassword();
        auth.setAuthToken();
        auth.saveAuthDetails(Peter.getUser(), pass.getPass(), auth.getAuthToken());
        std::cout << "Credentials saved successfully.\n";
        }*/
    return 0;
}
