// Multimaps

#include <iostream>
#include <map>

#include "../util.h"

void multiMaps() {

	std::multimap<int, std::string> lookup;

	lookup.insert(std::make_pair(30, "Mike"));
	lookup.insert(std::make_pair(10, "Vicky"));
	lookup.insert(std::make_pair(30, "Raj"));
	lookup.insert(std::make_pair(20, "Bob"));

	for (std::multimap<int, std::string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	std::cout << std::endl;

	for (std::multimap<int, std::string>::iterator it = lookup.find(20); it != lookup.end(); it++) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	std::cout << std::endl;
	// iterating through keys in the multimap 
	//std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(30);
	// instead of this we can:
	auto its = lookup.equal_range(30);

	for (std::multimap<int, std::string>::iterator it = its.first; it != its.second; it++) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	toContinue();
}