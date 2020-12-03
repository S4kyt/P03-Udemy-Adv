// Lists
// similar to vector, important differences
// difference: insert items into list, at middle
// while with vectors we are restricted to inserting at the end

// double linked list

#include <iostream>
#include <list>

#include "../util.h"

void listsPractice() {

	std::list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	// element of start of the list
	std::list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	std::cout << "Element: " << *it << std::endl;


	std::list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	// when we erase the element the iterator refers to
	// we invalidate the iterator, so we cant rely on it
	// numbers.erase(eraseIt);

	// instead we have to do this!
	eraseIt = numbers.erase(eraseIt);
	std::cout << "Element: " << *eraseIt << std::endl;

	// so we can erase and insert items while we are iterating through it
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end();) {
		if (*it == 2) {
			numbers.insert(it, 1234);
		}
		if (*it == 1) {
			// this will invalidate the iterator, so we have to set the iterator back
			//numbers.erase(it);

			// like this
			it = numbers.erase(it);
		}
		// we need this because we would skip an element if we were to assign "it" a value again
		else {
			it++;
		}
	}

	// we have to use an iterator
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++ ){
		std::cout << *it << std::endl;
	}

	toContinue();
}
