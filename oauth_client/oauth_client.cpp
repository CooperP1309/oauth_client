#include <iostream>

/* external libs */
#include "external/platform.hpp"

int main()
{
	std::string platform_name;
	
	std::cout << "Enter the platform name in your client_credentials.txt (case-sensitive): ";
	std::cin >> platform_name;
	std::cout << "\n\n";

	Platform platform(platform_name);

	json response_buffer;
	if (platform.get_endpoint("/v2/device/2", response_buffer)) 
	{
		return -1;
	}

	std::cout << "\nResponse:\n\n" << response_buffer.dump(2);

	/*
	std::cout << "Select an endpoint to call:\n\n";
	std::cout << "\t1. /device/2\n";
	std::cout << "\t2. /organizations\n";
	std::cout << "\t3. /technicians\n\n";
	std::cin >> platform_name;

	switch 
	*/

    return 0;
}