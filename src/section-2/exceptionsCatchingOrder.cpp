// Exception Catching Order

#include <iostream>
#include <exception>

#include "../util.h"

// Polymorphism quarantees us that we can use a subclass wherever a parent class is excepted
// What happens here is:
// First catch block is exception, bad alloc is subclass of this exception class, therefore first catch block will accept the exception
//
// bad_alloc is a type of exception, but exception isn't a type of bad_alloc!
//
// IMPORTANT!
// Takeaway: We must be careful to capture exceptions with the subclasses before their parent classes, otherwise they are useless!
void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) {
		throw std::bad_alloc();
	}
	if (error1Detected) {
		throw std::exception();
	}
}

void exceptionCatchingOrder() {

	try {
		goesWrong();
	}
	catch (std::bad_alloc& e) {
		std::cout << "Catching bad_alloc: " << e.what() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Catching exception: " << e.what() << std::endl;
	}

	std::cout << "Program is running" << std::endl;

	toContinue();
}