// Two-Dimensional Vectors

#include <iostream>
#include <vector>

#include "../util.h"

void twoDimensionalVectors() {

	// vector of vectors
	std::vector< std::vector<int > > grid(3, std::vector<int>(4,7));

	// demonstrates that with vectors we dont have to have all the same sizes
	// for rows and colums, we can just do this
	grid[1].push_back(8);

	// looping through it
	for ( int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			std::cout << grid[row][col] << std::flush;
		}

		std::cout << std::endl;
	}

	toContinue();
}
