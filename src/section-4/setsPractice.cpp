// Sets
// Only stores unique elements
// Very good for alot of objects, getting rid of duplicates and finding the unique ones

#include <iostream>
#include <set>

#include "../util.h"

class Test {
	int id;
	std::string name;

public:
	Test(): id(0), name("") {}
	Test(int id, std::string name) : id(id), name(name) {}

	// const after print means that the body of the function will definitely not change
	void print() const {
		std::cout << id << ": " << name << std::endl;
	}

	// overloading "less than" operator
	bool operator<(const Test &other) const {
		return name < other.name;
	}

};

void setsPractice() {

	std::set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(20);

	// this wont do anything, thats why set is useful, all values are unique
	// numbers.insert(30);

	for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end()) {
		std::cout << "Found: " << *itFind << std::endl;
	}

	// check if element is in the set
	if (numbers.count(30)) {
		std::cout << "Number found." << std::endl;
	}


	std::set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(20, "Sue"));
	// this only compares name, so we could have the same key
	tests.insert(Test(30, "Emily"));
	// this wont happen cuz set can only have unique items, we are comparing names, so this wont happen
	tests.insert(Test(333, "Joe"));

	for (std::set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}

	toContinue();
}
