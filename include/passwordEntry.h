#ifndef PASSWORD_ENTRY_H
#define PASSWORD_ENTRY_H

#include <string>

class passwordEntry{

private:
	std::string service;
	std::string username;
	std::string password;

public:

passwordEntry   (const std::string& service,
		const std::string& username,
		const std::string& password);


std::string getService() const;
std::string getUsername() const;
std::string getPassword() const;

};

#endif	
			
