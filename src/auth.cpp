#include "/Users/test/Desktop/User/include/auth.h"

void Auth::setAuthToken()
{
std::cout << "Set Auth Token" << std::endl;
std::cin >> auth;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cin.clear();

}

std::string Auth::getAuthToken() const{
    return auth;
}

void Auth::saveAuthDetails(const std::string& username, const std::string& password, const std::string& authToken){
        std::ofstream outFile("/Users/test/Desktop/User/auth_data.txt");
        if (outFile.is_open()){
            outFile << "Username: " << username << '\n' << "Password: "<<password << '\n' << "Auth: " << authToken << '\n';
        }else{
            std::cerr << "Unable to open file for writing\n";
        }
}

bool Auth::loadAuthDetails( std::string& username,  std::string& password, std::string& authToken) {
        std::ifstream inFile("/Users/test/Desktop/User/auth_data.txt");
        if (inFile.is_open()) {
            std::string line;
            std::getline(inFile, line); username = line.substr(line.find(": ") + 2);
            std::getline(inFile, line); password = line.substr(line.find(": ") + 2);
            std::getline(inFile, line); authToken = line.substr(line.find(": ") + 2);
            inFile.close();
            return true;
        }
        return false;
    }
