#include <iostream>
#include <limits>

void clearScreen()
{
	system("cls");
}

void toContinue()
{
	bool isBrowsing = true;

	while (isBrowsing == true)
	{
		std::string toContinue;

		std::cout << '\n';
		std::cout << "< Enter 'x' to return to the menu. >" << std::endl;
		std::cin >> toContinue;

		if (toContinue == "x" || toContinue == "X")
		{
			isBrowsing = false;
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}