// Custom Objects As Map Values

#include <iostream>
#include <map>

#include "../util.h"

class Person
{
private:
	std::string name;
	int age;

public:

	Person(): name(""), age(0) {}
	// constructor that initializes member values
	Person(std::string name, int age) : name(name), age(age) {}

	// copy constructor
	Person(const Person& other) {
		std::cout << "Copy constructor running" << std::endl;
		name = other.name;
		age = other.age;
	}

	void print() const {
		std::cout << name << ": " << age << std::endl;
	}
};

void customObjectsAsMapValues() {

	std::map<int, Person> people;

	// a map will always sort its keys in order!!!
	people[50] = Person("Mike", 40);
	people[32] = Person("Vicky", 30);
	people[1] = Person("Raj", 20);

	// copy constructor running
	people.insert(std::make_pair(55, Person("Bob", 45)));
	people.insert(std::make_pair(55, Person("Sue", 24)));

	for (std::map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		std::cout << it->first << ": " << std::flush;
		it->second.print();
	}

	toContinue();
}