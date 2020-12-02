// Writing Text Files

#include <iostream>
#include <fstream>

#include "../util.h"

void writingTextfiles() {
	
	//std::ofstream outFile;
	std::fstream outFile;

	std::string outFileName = "src/section-3/writingReading.txt";

	//outFile.open(outFileName);
	outFile.open(outFileName, std::ios::out);


	if (outFile.is_open()) {
		// Dont need to use flush, endl we need to use usually
		outFile << "Hello there!" << std::endl;
		outFile << 123 << std::endl;
		outFile.close();
	}
	else {
		std::cout << "Couldn't create file: " << outFileName << std::endl;
	}

	toContinue();
}
