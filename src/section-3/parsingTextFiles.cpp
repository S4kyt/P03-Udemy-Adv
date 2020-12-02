// Parsing Text Files

#include <iostream>
#include <fstream>
#include <string>
#include "../util.h"

void parsingTextFiles() {

	std::string filename = "src/section-3/stats.txt";
	std::ifstream input;

	input.open(filename);

	if (!input.is_open()) {
		return;
	}

	while (input) {
		std::string line;

		std::getline(input, line, ':');

		int population;

		// extraction operator
		input >> population;

		// discards empty spaces
		// input.get();

		// read "white space"
		input >> std::ws;


		//if (!input) {
		//	break;
		//}

		std::cout << "'" << line << "'" << " -- " << "'" << population << "'" << std::endl;
	}

	input.close();

	toContinue();
}
