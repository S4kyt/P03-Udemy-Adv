// Maps

#include <iostream>
#include <map>

#include "../util.h"

void mapsPractice() {

	// declaring map
	std::map<std::string, int> ages;

	// adding items to the map
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;
	
	// keys in the map are always unique
	ages["Mike"] = 70;

	// creating a pair and inserting it into the map
	//ages.insert(std::pair<std::string, int>("Peter", 100));

	// easier to insert like this
	ages.insert(std::make_pair("Peter", 100));

	std::cout << ages["Raj"] << std::endl;

	// checking if value is in the map or not
	if (ages.find("Vicky") != ages.end()){
		std::cout << "Found Vicky" << std::endl;
	}
	else {
		std::cout << "Key Not Found" << std::endl;
	}

	//iterating through maps
	for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	//iterating through maps another way
	for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		std::pair<std::string, int> age = *it;

		std::cout << age.first << ": " << age.second << std::endl;
	}

	toContinue();
}