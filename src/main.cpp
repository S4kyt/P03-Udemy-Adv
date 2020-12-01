#include <iostream>
#include <limits>

#include "util.h"

#include "section-2/sec2.h"

void sectionTwoMenu() {
	bool browsingSubjects = true;

	std::string menuInput = "";

	while (browsingSubjects == true)
	{
		clearScreen();
		std::cout << "Choose which subject you'd like to view: " << std::endl;
		std::cout << "1. Basic Exceptions" << std::endl;
		std::cout << "2. Standard Exceptions" << std::endl;
		std::cout << "3. Custom Exceptions" << std::endl;

		std::cout << "\n";
		std::cout << "4. Return to main menu." << std::endl;

		std::cin >> menuInput;

		// Subjects:
		if (menuInput == "1")
		{
			// Basic Exceptions
			clearScreen();
			basicExceptions();
		}
		else if (menuInput == "2")
		{
			// Standard Exceptions
			clearScreen();
			standardExceptions();
		}
		else if (menuInput == "3")
		{
			clearScreen();
			customExceptations();
		}
		else if (menuInput == "4")
		{
			// Return to previous menu
			std::cout << "Returning to main menu." << std::endl;
			browsingSubjects = false;
			break;
		}
		else
		{
			std::cout << " Please choose a correct option from above." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

int main()
{
	bool browsingSections = true;

	std::string menuInput = "";

	while (browsingSections == true)
	{
		clearScreen();
		std::cout << "Choose which section's subjects you'd like to view: " << std::endl;
		std::cout << "1. Section 2" << std::endl;

		std::cout << "\n";
		std::cout << "3. Exit program" << std::endl;

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
			clearScreen();
			// new segments go here
		}
		else if (menuInput == "3")
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