#include "passwordEntry.h"


passwordEntry::passwordEntry(const std::string& service,
				const std::string& username,
				const std::string& password)
	:service(service),username(username),password(password) {}


std::string passwordEntry::getService() const{
	return service;
}

std::string passwordEntry::getUsername() const{
	return username;
}

std::string passwordEntry::getPassword() const{
	return password;
}


