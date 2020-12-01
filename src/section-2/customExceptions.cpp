// Custom Exceptations

#include <iostream>

#include "../util.h"

// Good practice to give the class a recognizable exception name
class MyException : public std::exception {
public:
	// This method means it cannot throw an exception "const throw" allows optimizing code
	// const throw() halts at runtime, bad practice, stay away from it
	virtual const char* what() const throw() {
		return "Something bad happened.";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};

void customExceptations() {
	
	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException &e) {
		std::cout << e.what() << std::endl;
	}

	
	toContinue();
}