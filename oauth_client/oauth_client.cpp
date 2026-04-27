#include <iostream>

/* external libs */
#include "external/platform.hpp"

int main()
{
	std::string platform_name;
	
	std::cout << "Enter the platform name in your client_credentials.txt (case-sensitive): ";
	std::cin >> platform_name;
	
	Platform platform(platform_name);

	while (1);

    return 0;
}