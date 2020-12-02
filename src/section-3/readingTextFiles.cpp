// Reading Text Files

#include <iostream>
#include <fstream>
// getline()
#include <string>

#include "../util.h"

void readingTextFiles() {
	
	std::string inFileName = "src/section-3/writingReading.txt";

	std::ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {
		
		std::string line;

		// Read line-by line
		while (inFile) {
			std::getline(inFile, line);
			std::cout << line;
		}

		std::cout << line;

		inFile.close();
	}
	else {
		std::cout << "Cannot open file: " << inFileName << std::endl;
	}


	toContinue();
}
