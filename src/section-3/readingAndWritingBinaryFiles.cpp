// Reading And Writing Binary Files

// Can be very useful for saving, loading for example!

#include <iostream>
#include <fstream>

#include "../util.h"

#pragma pack(push, 1)
struct Person {
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)


void readingAndWritingBinaryFiles() {

	// init struct
	Person someone = { "Frodo", 220, 0.8 };

	std::string fileName = "src/section-3/test.bin";

	/// <summary>
	/// Write Binary File
	/// </summary>

	std::ofstream outputFile;

	// std::ios::binary defines as binary
	outputFile.open(fileName, std::ios::binary);

	if (outputFile.is_open()) {

		// this would work, but there is another way of doing it thats better
		//outputFile.write((char *)&someone, sizeof(Person));

		outputFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));

		outputFile.close();
	}
	else {
		std::cout << "Couldn't create file: " + fileName << std::endl;
	}


	/// <summary>
	/// Read Binary File
	/// </summary>

	Person someoneElse = {};

	std::ifstream inputFile;

	// std::ios::binary defines as binary
	inputFile.open(fileName, std::ios::binary);

	if (inputFile.is_open()) {

		// this would work, but there is another way of doing it thats better
		//outputFile.write((char *)&someone, sizeof(Person));

		inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));

		inputFile.close();
	}
	else {
		std::cout << "Couldn't read file: " + fileName << std::endl;
	}

	std::cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << std::endl;

	toContinue();
}