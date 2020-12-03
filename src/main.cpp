#include <iostream>
#include <limits>

#include "util.h"
#include "sections.h"

int main()
{
	bool browsingSections = true;

	std::string menuInput = "";

	while (browsingSections == true)
	{
		clearScreen();
		std::cout << "Choose which section's subjects you'd like to view: " << std::endl;
		std::cout << "1. Section 2" << std::endl;
		std::cout << "2. Section 3" << std::endl;
		std::cout << "3. Section 4" << std::endl;

		std::cout << "\n";
		std::cout << "5. Exit program" << std::endl;

		std::cin >> menuInput;

		// Sections:
		if (menuInput == "1")
		{
			// Section 2:
			clearScreen();
			sectionTwoMenu();
		}
		else if (menuInput == "2")
		{
			// Section 3:
			clearScreen();
			sectionThreeMenu();
		}
		else if (menuInput == "3")
		{
			// Section 4:
			sectionFourMenu();
			clearScreen();
		}
		else if (menuInput == "4")
		{
			// Section 5:
			//sectionFiveMenu();
			clearScreen();
		}
		else if (menuInput == "5")
		{
			// Exit
			std::cout << "Exiting..." << std::endl;
			browsingSections = false;
			break;
		}
		else
		{
			std::cout << " Please choose a correct option from above." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return 0;
}