// Vectors

#include <iostream>
#include <vector>

#include "../util.h"

void vectorsPractice() {

	// declaring vector object, <int> being its type
	std::vector<std::string> strings;

	// adding 3 elements to the vector
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	// looping through with normally
	for (int i = 0; i < strings.size(); i++) {
		std::cout << strings[i] << std::endl;
	}

	// looping through with iterator
	for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++) {
		std::cout << *it << std::endl;
	}

	// pointing to element 3
	std::vector<std::string>::iterator it = strings.begin();
	it += 2;

	std::cout << *it << std::endl;

	toContinue();
}
