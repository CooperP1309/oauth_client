#include <iostream>

/* external libs */
#include "external/platform.hpp"

/* macros for input switch */
#define ASCII_ONE 49
#define ASCII_TWO 50
#define ASCII_THREE 51

int main()
{
	std::string input;
	
	std::cout << "Enter the platform name in your client_credentials.txt (case-sensitive): ";
	std::cin >> input;
	std::cout << "\n\n";

	Platform platform(input);

	json response_buffer;
	int return_value = 0;
	while (1) 
	{
		std::cout << "\n\nSelect an endpoint to call:\n\n";
		std::cout << "\t1: /device/2\n";
		std::cout << "\t2: /organizations\n";
		std::cout << "\t3: /technicians\n\n";
		std::cin >> input;

		switch (input[0])
		{
			case ASCII_ONE:
				return_value = platform.get_endpoint("/v2/device/2", response_buffer);
				break;

			case ASCII_TWO:
				return_value = platform.get_endpoint("/v2/organizations", response_buffer);
				break;

			case ASCII_THREE:
				return_value = platform.get_endpoint("/v2/user/technicians", response_buffer);
				break;

			default:
				std::cout << "\nInvalid option: " << input[0] << std::endl;
		}

		if (return_value)
		{
			return -1;
		}
		
		std::cout << "\nResponse:\n\n" << response_buffer.dump(4);
	}

    return 0;
}