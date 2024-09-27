#ifndef PASSWORD_ENTRY_H
#define PASSWORD_ENTRY_H
//Represents a single  entry for a website/application.
//app:user:pass (for that web/app)
#include "user.h"
#include <string>
#include <iostream>

class Password_Entry{
    public:
    Password_Entry(const std::string title, const std::string website, const std::string username, const std::string password)
    : title(title), website(website), username(username), password(password) {}
    std::string getTitle() const;
    std::string getWebsite() const;
    std::string getUsername() const;
    std::string getPassword() const;

    std::string getNotes() const;
    std::string setNotes(const std::string& notes);

    private:
    std::string website;
    std::string username;
    std::string password;
    std::string title;
    std::vector<std::string> notes;

};

#endif
