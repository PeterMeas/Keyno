#ifndef PASSWORD_ENTRY_H
#define PASSWORD_ENTRY_H
//Represents a single  entry for a website/application.
//app:user:pass (for that web/app)
#include "user.h"
#include <string>
#include <iostream>

class Password_Entry{
    public:
    Password_Entry(const User& user, const std::string title, const std::string website, const std::string username, const std::string password)
    : user(user), title(title), website(website), username(username), password(password) {}
    void setPassword(const User& user, const std::string& newPassword); //input
    bool isUser(const User& user) const;
    std::string getTitle() const;
    std::string getWebsite() const;
    std::string getUsername() const;
    std::string getPassword() const;

    std::vector<std::string> getNotes() const;
    void setNotes(const std::string& notes);

    private:
    User user;
    std::string website;
    std::string username;
    std::string password;
    std::string title;
    std::vector<std::string> notes;

};

#endif
