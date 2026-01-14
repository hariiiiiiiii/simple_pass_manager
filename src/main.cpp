#include <iostream>

#include "passwordEntry.h"


int main(){
	passwordEntry entry("github","hari","pass");
	std::cout << "Service" << entry.getService() << '\n';
	std::cout << "Username" << entry.getUsername() << '\n';
	std::cout << "Password" << entry.getPassword() << '\n';

	return 0;
}
