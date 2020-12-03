#ifndef SECTIONS_H
#define SECTIONS_H

#include "section-2/sec2.h"
#include "section-3/sec3.h"
#include "section-4/sec4.h"

// Section 2
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
		std::cout << "4. Exception Catching Order" << std::endl;

		std::cout << "\n";
		std::cout << "5. Return to main menu." << std::endl;

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
			// Custom Exceptions
			clearScreen();
			customExceptations();
		}
		else if (menuInput == "4")
		{
			// Exception Catching Order
			clearScreen();
			exceptionCatchingOrder();
		}
		else if (menuInput == "5")
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

// Section 3
void sectionThreeMenu() {
	bool browsingSubjects = true;

	std::string menuInput = "";

	while (browsingSubjects == true)
	{
		clearScreen();
		std::cout << "Choose which subject you'd like to view: " << std::endl;
		std::cout << "1. Writing Text Files" << std::endl;
		std::cout << "2. Reading Text Files" << std::endl;
		std::cout << "3. Parsing Text Files" << std::endl;
		std::cout << "4. Structs And Padding" << std::endl;
		std::cout << "5. Reading And Writing Binary Files" << std::endl;

		std::cout << "\n";
		std::cout << "6. Return to main menu." << std::endl;

		std::cin >> menuInput;

		// Subjects:
		if (menuInput == "1")
		{
			// Writing Text Files
			clearScreen();
			writingTextfiles();
		}
		else if (menuInput == "2")
		{
			// Reading Text Files
			clearScreen();
			readingTextFiles();
		}
		else if (menuInput == "3")
		{
			// Parsing Text Files
			clearScreen();
			parsingTextFiles();
		}
		else if (menuInput == "4")
		{
			// Structs And Padding
			clearScreen();
			structsAndPadding();
		}

		else if (menuInput == "5")
		{
			// Reading And Writing Binary Files
			clearScreen();
			readingAndWritingBinaryFiles();
		}
		else if (menuInput == "6")
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

// Section 4
void sectionFourMenu() {
	bool browsingSubjects = true;

	std::string menuInput = "";

	while (browsingSubjects == true)
	{
		clearScreen();
		std::cout << "Choose which subject you'd like to view: " << std::endl;
		std::cout << "1. Vectors" << std::endl;
		std::cout << "2. Vectory And Memory" << std::endl;
		std::cout << "3. Two-Dimensional Vectors" << std::endl;
		std::cout << "4. Lists" << std::endl;

		std::cout << "\n";
		std::cout << "5. Return to main menu." << std::endl;

		std::cin >> menuInput;

		// Subjects:
		if (menuInput == "1")
		{
			// Vectors
			clearScreen();
			vectorsPractice();
		}
		else if (menuInput == "2")
		{
			// Vectory And Memory
			clearScreen();
			vectorsAndMemory();
		}
		else if (menuInput == "3")
		{
			// Two-Dimensional Vectors
			clearScreen();
			twoDimensionalVectors();
		}
		else if (menuInput == "4")
		{
			// Lists
			clearScreen();
			listsPractice();
		}
		else if (menuInput == "5")
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

#endif // SECTIONS_H