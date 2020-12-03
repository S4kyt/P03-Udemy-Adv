// Vectory And Memory

#include <iostream>
#include <vector>

#include "../util.h"

void vectorsAndMemory() {

	// presizing vector
	std::vector<double> numbers(0);
	// presizes it to 20, initializes everything to 0
	// std::vector<double> numbers(20, 0);
	
	std::cout << "Size: " << numbers.size() << std::endl;

	// size of the internal array that the vector is using
	int capacity = numbers.capacity();
	std::cout << "Capacity: " << capacity << std::endl;

	for (int i = 0; i < 10000; i++) {

		// exponentally increases the new array's size, since vector works by
		// creating a new array of the exponentially bigger size, copies the previous array's elements
		// and we have a new, bigger capacity array

		// when this "copying" happens, we could get pauses in the program
		// makes me think of chunk loading
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			std::cout << "Capacity: " << capacity << std::endl;
		}

		numbers.push_back(i);
	}

	// if we clear the vector, it affects size
	// but the capacity will stay the same
	//numbers.clear();

    // resizes
	numbers.resize(100);
	std::cout << numbers[2];
	std::cout << "Size: " << numbers.size() << std::endl;
	std::cout << "Capacity: " << numbers.capacity() << std::endl;

	// increase size of the internal vector of the array
	numbers.reserve(100000);
	// capacity will be 100000 


	toContinue();
}
