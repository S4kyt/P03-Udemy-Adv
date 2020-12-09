// Custom Objects As Map Keys

#include <iostream>
#include <map>

#include "../util.h"

class Person
{
private:
	std::string name;
	int age;

public:

	Person() : name(""), age(0) {}
	// constructor that initializes member values
	Person(std::string name, int age) : name(name), age(age) {}

	// copy constructor
	Person(const Person& other) {
		name = other.name;
		age = other.age;
	}

	void print() const {
		std::cout << name << ": " << age << std::flush;
	}

	bool operator<(const Person& other) const {

		if (name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}
	}
};

void customObjectsAsMapKeys() {

	std::map<Person, int> people;

	// a map will always sort its keys in order!!!
	people[Person("Mike", 40)] = 40;
	// the key itself isn't going to get overwritten, but the value will be
	// thats why we added the age comparassion
	people[Person("Mike", 444)] = 123;
	people[Person("Vicky", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for (std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		std::cout << it->second << ": " << std::flush;
		it->first.print();
		std::cout << std::endl;
	}

	toContinue();
}