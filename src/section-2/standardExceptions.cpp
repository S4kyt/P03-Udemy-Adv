// Standard Exceptions

#include <iostream>

#include "../util.h"

class CanGoWrong {
public:
	CanGoWrong() {
		// Allocating memory
		// We'd get the exception here in case allocating a chunk of memory thats too big, but I am using Visual Studio which doesn't even let me build the program like this.
		char* pMemory = new char[999999999];
		delete[] pMemory;
	}
};

void standardExceptions() {

	try {
		CanGoWrong wrong;
	}
	// bad_alloc class object
	// Thats why we use reference here
	catch (std::bad_alloc &e) {
		// bad_alloc.what() prints out an useful message to us
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << "Still running." << std::endl;

	toContinue();
}