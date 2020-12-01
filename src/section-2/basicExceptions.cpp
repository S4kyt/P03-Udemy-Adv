// Basic Exceptions

// Excercise:
// 1. Throwing, catching a basic exception
// 2. Try throwing and catching different types : int, primivite string / char const*, std::string

#include <iostream>

#include "../util.h"

void throwBasicException() {

	bool error = true;

	if (error) {
		throw;
	}
}


void exceptionHandling() {

	// Change errors here to get the diff. results
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;


	// As soon as this gets thrown, error2 or error3 wont get excecuted, we return to basicExceptions() instead!
	if (error1) {
		throw 16;
	}
	if (error2) {
		throw "Char const string exception";
	}
	if (error3) {
		// 1. This is creating an object of the string class
		throw std::string("String exception");
	}
}

void basicExceptions() {

	//throwBasicException();

	try {
		exceptionHandling();
	}
	catch (int e) {
		std::cout << "Error code: " << e << std::endl;
	}
	catch (char const * e) {
		std::cout << "Error message: " << e << std::endl;
	}
	// 2. Thats why we refer to it as an object
	catch (std::string &e) {
		std::cout << "String error message: " << e << std::endl;
	}

	std::cout << "Program is running." << std::endl;

	toContinue();
}